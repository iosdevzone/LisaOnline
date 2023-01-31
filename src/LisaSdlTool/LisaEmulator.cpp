//
//  LisaEmulator.cpp
//  LisaSdlTool
//
//  Created by idz on 1/18/23.
//

#include "LisaEmulator.h"
#include "LisaEmulatorCallbacks.h"

extern "C" {
#include <vars.h>
#include <reg68k.h>
#include <cpu68k.h>
}
#include <via6522.h>

uint8 evenparity(uint8 data)            // from http://graphics.stanford.edu/~seander/bithacks.html#ParityParallel
{
  uint32 v=data;
  //v ^= v >> 16;       // not needed since we're working on a byte - only here for completeness, but commented out
  //v ^= v >> 8;        // ditto
  v ^= v >> 4;
  v &= 0xf;
  return !(  (0x6996 >> v) & 1  );
}

void LisaEmulator::Initialize()
{
    extern void set_lisa_emulator(LisaEmulator* pEmulator);
    
    set_lisa_emulator(this);

    //setstatusbar("Initializing Parity calculation cache array...");
    { uint16 i;
      for (i=0; i<256; i++) eparity[i]=evenparity((uint8) i);
    }
    
    
    // needs to be above read_config_files
    scc_a_port=NULL;
    scc_b_port=NULL;
    scc_a_IW=-1;
    scc_b_IW=-1;
    serial_a=0;
    serial_b=0;

    
    init_floppy(0xA8);

    bitdepth=8;                             // have to get this from the X Server side...


    DEBUG_LOG(0,"serial number");
    serialnum[0]=0x00;                      // "real" ones will be loaded from the settings file
    serialnum[1]=0x00;
    serialnum[2]=0x00;
    serialnum[3]=0x00;
    serialnum[4]=0x00;
    serialnum[5]=0x00;
    serialnum[6]=0x00;
    serialnum[7]=0x00;
    serialnumshiftcount=0; serialnumshift=0;
    
    init_cops();
    
    segment1=0; segment2=0; start=1;
    
    init_IRQ();
    
    init_vias();
    
    init_Profiles();
    
    maxlisaram=0x200000;  minlisaram=0x080000;
    
    TWOMEGMLIM=maxlisaram-1;
    videolatchaddress=maxlisaram-0x10000;

    videolatch=(maxlisaram>>15)-1; // last page of ram is by default what the video latch gets set to.
    lastvideolatch=videolatch;  lastvideolatchaddress=videolatchaddress;
    
    lisaram=(uint8 *) malloc(2 * 1024 * 1024 + 1024);
    memset(lisaram,0xff,2*1024*1024+511);
    
    //disconnect_serial(0);
    //disconnect_serial(1);
    initialize_scc(0);
    
    softmemerror=0; harderror=0; videoirq=0; bustimeout=0; videobit=0;
    
    reg68k_sanity_check_bitorder();
    
    cpu68k_init();
    
    init_lisa_mmu();
    
    init_ipct_allocator();

    read_rom("boot.ROM", lisarom);

    // Without this fixromchk() you'll get an error 45
    fixromchk();
    
    disable_vidram(); videoramdirty=32768;
    
    // With out this vidfixromchk() you'll get an error 42
    vidfixromchk(serialnum240);
    
    fprintf(stderr, "romless: %d\n", romless);
    
    const char *diskImagePath = "LisaOfficeHardDisk.dc42";
    
    int viaIndex = 2;
    if (!via[viaIndex].ProFile)
    {
        via[viaIndex].ProFile = (ProFileType*)calloc(1, sizeof(ProFileType));
    }
    int result = profile_mount(diskImagePath, via[viaIndex].ProFile);
    via[viaIndex].ProFile->vianum = viaIndex;
    ProfileReset(via[viaIndex].ProFile);
    
    //connect_device_to_via(2, my_lisaconfig->parallel, &my_lisaconfig->parallelp, "/parallelport/path");
    
    cpu68k_reset();
    
    int32 clx = reg68k_external_execute(1);
    fprintf(stderr, "Execute %d\n", clx);
    
}

void* LisaEmulator::GetVideoRamBase()
{
    return &lisaram[videolatchaddress];
}
    
void LisaEmulator::OnMouseMotion(int x, int y, int button)
{
    y = y * 2 / 3;
    add_mouse_event(x, y, button);
    seek_mouse_event();
}


int LisaEmulator::Execute(int target)
{
    int clocks = (int)reg68k_external_execute(target);
    get_next_timer_event();
    return clocks;
}

void LisaEmulator::DeciSecondTimerClick()
{
    decisecond_clk_tick();
}

void LisaEmulator::SendKeycode(int keycode)
{
    send_cops_keycode(keycode);
}

void LisaEmulator::PressPowerKey()
{
    presspowerswitch();
}

void LisaEmulator::OnPowerOff()
{
    mbPowerOff = true;
}

void LisaEmulator::InsertFloppy(const char *pDiskImagePath)
{
    floppy_insert(pDiskImagePath);
}

