//
//  LisaEmulatorCallbacks.c
//  LisaSdlTool
//
//  Created by idz on 1/18/23.
//

#include <vars.h>
#include "LisaEmulatorCallbacks.h"
#include "LisaEmulator.h"
#include "LisaUISDL.h"
#include <cassert>

static LisaEmulator *spEmulator = NULL;
static LisaUISDL *spUI = NULL;

void set_lisa_ui(LisaUISDL* pUI)
{
    spUI = pUI;
}

void set_lisa_emulator(LisaEmulator *pEmulator)
{
    assert(spEmulator == NULL);
    spEmulator = pEmulator;
}

/// Called from via6522 to play sound
void sound_play(uint16 t2)
{
    Uint8 sr = via[1].via[SHIFTREG];
    int bitsPerWave = 0;
    switch(sr)
    {
        case 0x55: /* 01010101 = 4 square waves */
            bitsPerWave = 2;
            break;
        case 0x33: /* 00110011 = 2 waves */
            bitsPerWave = 4;
            break;
        case 0x0f: /* 00001111 = 1 wave */
            bitsPerWave = 8;
            break;
    }
    int microSecondsPerBit = t2 * 4;
    int period = microSecondsPerBit * bitsPerWave;
    printf("t2=0x%02x sr=0x%02x\n", t2, sr);
    printf("period=%dus\n", period);
    printf("frequency=%fHz\n", 1000000.0 / (double)period);
    int samples=22050*2;                // a second


    int data_size=0;
    int cycles, halfcycles;
    unsigned char vhigh, vlow;
    
    
    


//r    if (t2>0xaf) {ALERT_LOG(0,"T2 out of range: 0x%02x",t2); return;}                       // out of range
//    if (my_lisaframe->lastt2==t2 && (cpu68k_clocks-my_lisaframe->lastclk < 50000))
//                 {ALERT_LOG(0,"repeat call suppressed"    ); return;}                       // duplicate call if timing <1/100th of a second
//
//    my_lisaframe->lastt2=t2;
//    my_lisaframe->lastclk=cpu68k_clocks;

#ifdef LISA_DEBUG // idz -- this does not compile because iorom is undefined.
    if ((iorom & 0xa0)==0xa0) { // check for A8 IOROM
      if      (t2== ((0x20 >>2) + 0x20) ) ALERT_LOG(0,"HIPTCH 0x28 Lisa 2/5 A8 ROM");
      else if (t2== ((0x60 >>2) + 0x60) ) ALERT_LOG(0,"LOPTCH 0x78 Lisa 2/5 A8 ROM");
      else if (t2== ((0xa0 >>2) + 0xa0) ) ALERT_LOG(0,"CLICK  0xc8 Lisa 2/5 A8 ROM");
      else                                ALERT_LOG(0,"Other sound freq: %02x for Lisa 2/5 A8 ROM (28=high, 78=low)",t2);
    }
    else
    {
      if      (t2==(0x20))                ALERT_LOG(0,"HIPTCH 0x20 Lisa 2/10 88 ROM");
      else if (t2==(0x60))                ALERT_LOG(0,"LOPTCH 0x60 Lisa 2/10 88 ROM");
      else if (t2==(0xa0))                ALERT_LOG(0,"CLICK  0xa0 Lisa 2/10 88 ROM");
      else                                ALERT_LOG(0,"Other sound freq: %02x for Lisa 2/10 88 ROM (20=high, 60=low)",t2);
    }
#endif

    static const unsigned char header[45]=
    {
            //   0    1    2    3    4    5    6    7    8    9    a    b    c    d    e    f
      /*00*/  0x52,0x49,0x46,0x46,   0,   0,0x00,0x00,0x57,0x41,0x56,0x45,0x66,0x6D,0x74,0x20,  // RIFFF-..WAVEfmt
      /*10*/  0x10,0x00,0x00,0x00,   1,   0,0x01,0x00,0x22,0x56,0x00,0x00,0x22,0x56,0x00,0x00,  //  ........"V.."V..
      /*20*/  0x01,0x00,0x08,0x00,0x64,0x61,0x74,0x61,0x22,0x2D,0x00,0x00//0x80,0x80,0x80,0x80  //  ....data"-......
    };       //                      d    a    t    a [LSB____________MSB]

    static unsigned char data[22050*5+45+1024];
    unsigned char *dataptr;
    //data=(unsigned char *)calloc(1,45+samples+1024);  // allocate a buffer, make it 22Kbps
    memcpy(data,header,45);        // copy the header over it.

// ac44 2022 5622 15888
    data[0x16]=1;      // 1=1 channel = mono, 2= 2 channels = stereo
    data[0x17]=0;

    // *** this works from RAM now but the pitch  is way too high, so had to switch to 44KHz
    data[0x18]=0x44;       // bit rate LSB.   0x5622=22050Hz   22Khz
    data[0x19]=0xac;       //                 0x2D22=11554Hz   11Khz
    data[0x1a]=0x00;       //                 0xAC44=44100Hz   44Khz was this <<--
    data[0x1b]=0x00;       // bit rate MSB

    data[0x1c]=data[0x18]; // bytes per second
    data[0x1d]=data[0x19]; // should match bit rate above for 8 bit samples
    data[0x1e]=data[0x1a];
    data[0x1f]=data[0x1b];

    data[0x20]=1;          // Bytes Per Sample:
    data[0x21]=0;          // 1=8 bit Mono, 2=8 bit Stereo or 16 bit Mono, 4=16 bit Stereo

    data[0x22]=8;          // 8, or 16  bits/sample
    data[0x23]=0;

    dataptr=&data[0x2c]; data_size=0;
      
      volume = 3;

    volume=(volume & 0x0f);

    // 128 is our 0V, vhigh is the +V, vlow=-V, thus creating a square wave
    vlow =128-(volume<<3);
    vhigh=128+(volume<<3);

    // *** this works from RAM now, but the pitch  is way too high, *4 is to compensate for that.
    cycles=t2*4;
   // if (!(my_lisaconfig->iorom & 0x20)) cycles=cycles*8/10;       // cycles *=0.8
    cycles=(cycles>>1)+(cycles>>2);                // cycles *=0.75; (1/2 + 1/4th)
    halfcycles=cycles>>1;                          // cycles /=2;

    int i=0;
    if (t2>0x90) samples=cycles;                   // prevent click from turning into beep

    while (samples>=cycles)
    {
        i++;
        memset(dataptr,vhigh,halfcycles); dataptr+=halfcycles;
        memset(dataptr,vlow, halfcycles); dataptr+=halfcycles;
        samples-=cycles; data_size+=cycles;
    }

    data[0x28]=((data_size)    ) & 0xff;
    data[0x29]=((data_size)>>8 ) & 0xff;
    data[0x2a]=((data_size)>>16) & 0xff;
    data[0x2b]=((data_size)>>24) & 0xff;

    data[0x04]=((data_size+36)    ) & 0xff;
    data[0x05]=((data_size+36)>>8 ) & 0xff;
    data[0x06]=((data_size+36)>>16) & 0xff;
    data[0x07]=((data_size+36)>>24) & 0xff;


    dataptr=&data[0];
//    /*
//     typedef struct SDL_AudioSpec
//     {
//         int freq;                   /**< DSP frequency -- samples per second */
//         SDL_AudioFormat format;     /**< Audio data format */
//         Uint8 channels;             /**< Number of channels: 1 mono, 2 stereo */
//         Uint8 silence;              /**< Audio buffer silence value (calculated) */
//         Uint16 samples;             /**< Audio buffer size in sample FRAMES (total samples divided by channel count) */
//         Uint16 padding;             /**< Necessary for some compile environments */
//         Uint32 size;                /**< Audio buffer size in bytes (calculated) */
//         SDL_AudioCallback callback; /**< Callback that feeds the audio device (NULL to use SDL_QueueAudio()). */
//         void *userdata;             /**< Userdata passed to callback (ignored for NULL callbacks). */
//     } SDL_AudioSpec;
//     */
    
//    extern DECLSPEC SDL_AudioDeviceID SDLCALL SDL_OpenAudioDevice(
//                                                      const char *device,
//                                                      int iscapture,
//                                                      const SDL_AudioSpec *desired,
//                                                      SDL_AudioSpec *obtained,
//                                                      int allowed_changes);
//
    SDL_AudioSpec requested;
    SDL_AudioSpec obtained;
requested.freq = 44000;
    requested.channels = 1;
    requested.format = AUDIO_S8;
    requested.samples = data_size;
    requested.size = data_size;
    requested.callback = NULL;
    requested.userdata = NULL;
    SDL_AudioDeviceID devID = SDL_OpenAudioDevice(NULL, 0, &requested, &obtained, SDL_AUDIO_ALLOW_ANY_CHANGE);
    SDL_QueueAudio(devID, dataptr + 45, data_size);
    SDL_PauseAudioDevice(devID, 0);
}

// https://wiki.libsdl.org/SDL2/SDL_ShowSimpleMessageBox
void messagebox(const char *s, const char *t)
{
    if (spUI) spUI->MessageBox(s, t);
//    printf("%s\n", s);
//    printf("%s\n", t);
//    //printf("Press any key to continue...");
//    fflush(stdout);
//    getchar();
}

int yesnomessagebox(const char *s, const char *t)
{
    printf("%s\n", s);
    printf("%s\n", t);
    printf("[y/n]?");
    fflush(stdout);
    int c = getchar();
    return c == 'y';
}

void ImageWriterLoop(int iw, uint8 c)
{
    
}

void LisaScreenRefresh(void)
{
    
}

void connect_serial_devices(void)
{
    // calls connect_device_to_serial with values from settings
}

void contrastchange(void)
{
    
}

void lisa_powered_off()
{
    assert(spEmulator != NULL);
    spEmulator->OnPowerOff();
}

void lisa_console_output(uint8 c)
{
    
}

void eject_floppy_animation(void)
{
    
}

void floppy_motor_sounds(int track)
{
    
}

void init_terminal_serial_port(int port)
{
}

void lisa_rebooted()
{
    
}

void lpw_console_output(char *text)
{
    
}

void lpw_console_output_c(char c)
{
    
}

void on_lisa_exit(void)
{
    
}

void sound_off(void)
{
    
}

void save_pram(void)
{
    
}

void update_profile_preferences_path(char *newfilename)
{
    
}

int pickprofilesize(char *filename, int allowexisting)
{
    return -1;
}

char read_serial_port_terminal(int port)
{
    return -1;
}

void write_serial_port_terminal(int port, uint8 data)
{
}

void rename_rompath(char *rompath)
{
    
}

