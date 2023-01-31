//
//  LisaUISDL.cpp
//  LisaSdlTool
//
//  Created by idz on 1/27/23.
//

#include "LisaUISDL.h"
#include "LisaSDLKeycodes.h"

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#include <emscripten/html5.h>
#endif

#include <iostream>



#include "LisaEmulator.h"

#include <keyscan.h>

#include <dirent.h>

LisaUISDL::LisaUISDL()
{
    extern void set_lisa_ui(LisaUISDL* pUI);
    
    //    generate_key_table();
    SDL_Init(SDL_INIT_EVERYTHING);
    int h = mEmulator.GetScreenHeight();
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "2");
    Uint32 windowFlags = SDL_WINDOW_ALLOW_HIGHDPI;
    SDL_CreateWindowAndRenderer(mEmulator.GetScreenWidth(), h + h / 2, windowFlags, &mpWindow, &mpRenderer);
    mpSurface = SDL_CreateRGBSurface(0, mEmulator.GetScreenWidth(), mEmulator.GetScreenHeight(), 32, 0, 0, 0, 0);
    mEmulator.Initialize();
    set_lisa_ui(this);
}

void LisaUISDL::MessageBox(const char* pMessage, const char *pTitle)
{
    int buttonID = 0;
    const SDL_MessageBoxData messageBoxData = {
        .flags = SDL_MESSAGEBOX_ERROR,
        .window = WindowGet(),
        .title = pTitle,
        .message = pMessage
    };
    SDL_ShowMessageBox(&messageBoxData, &buttonID);
}



// see: https://www.jamesfmackenzie.com/2019/12/01/webassembly-graphics-with-sdl/
void LisaUISDL::RenderLisaScreen() {
    if (SDL_MUSTLOCK(mpSurface)) SDL_LockSurface(mpSurface);
   
    Uint32 * pixels = (Uint32*)SurfaceGet()->pixels;
    LisaEmulator& emulator = EmulatorGet();

    Uint8 *pLisaVideoRamBase = (Uint8*)emulator.GetVideoRamBase();
    for(int y = 0; y < emulator.GetScreenHeight(); ++y)
    {
        for(int x = 0; x < emulator.GetScreenWidth(); ++x)
        {
            int shift = 7 - (x % 8);
            int byteIndex = (y * 720 + x) /  8;
            Uint8 byte = pLisaVideoRamBase[byteIndex];
            *pixels++ = (byte & (1 << shift)) == 0 ? 0xFFFFFFFF : 0xFF000000;
        }
    }



    if (SDL_MUSTLOCK(mpSurface)) SDL_UnlockSurface(mpSurface);

    SDL_Texture *screenTexture = SDL_CreateTextureFromSurface(mpRenderer, mpSurface);

    SDL_RenderClear(mpRenderer);
    SDL_RenderCopy(mpRenderer, screenTexture, NULL, NULL);
    SDL_RenderPresent(mpRenderer);

    SDL_DestroyTexture(screenTexture);
}


void LisaUISDL::OnDropFile(const SDL_DropEvent& dropEvent)
{
    printf("OnDropFile(%s)\n", dropEvent.file);
    EmulatorGet().InsertFloppy(dropEvent.file);
}

void LisaUISDL::OnQuit(double clocksPerFrame)
{
    LisaEmulator& emulator = EmulatorGet();
    emulator.PressPowerKey();
    printf("Waiting for IsPoweredOff()\n");
    while(!emulator.IsPoweredOff())
    {
        emulator.Execute(clocksPerFrame);
    }
    printf("Got IsPoweredOff()\n");
}

bool LisaUISDL::ExecuteEmulatorChunk()
{
    extern int64_t cpu68k_clocks;
    static int64_t lastClocks = 0;
    static Uint32 startTicks = SDL_GetTicks();
    static Uint32 nFrames = 0;
    Uint32 nextDeciSecondTimer = 0;
    static int totalClocks = 0;
    double targetHz = 5 * 1000000;
    double clocksPerFrame = targetHz / 60.0;
    LisaEmulator& emulator = EmulatorGet();
    SDL_Event event;

    if (SDL_PollEvent(&event))
    {

        switch (event.type)
        {
            case SDL_DROPBEGIN:
                printf("SDL_DROPBEGIN\n");
                break;
            case SDL_DROPFILE:
                OnDropFile(event.drop);
                break;
            case SDL_QUIT:
                OnQuit(clocksPerFrame);
                return true;
            case SDL_MOUSEMOTION:
            {
                SDL_MouseMotionEvent motion = event.motion;
                Sint32 x = motion.x;
                Sint32 y = motion.y;
                
                
                emulator.OnMouseMotion((int)x, (int)y, 0);
                
               
                break;
            }
            
            case SDL_KEYUP:
            case SDL_KEYDOWN:
            {
                
                SDL_KeyboardEvent key = event.key;
                SDL_Scancode scancode = key.keysym.scancode;
                //SDL_Keysym sym = key.keysym.sym;
                Uint16 mod = key.keysym.mod;
                SDL_Keycode sym = key.keysym.sym;
                int lisa_keycode = SDLScanCodeToLisaKeycode(key.keysym.scancode);
                if (event.type == SDL_KEYDOWN)
                {
                    lisa_keycode |= KEY_DOWN;
                }
                if (lisa_keycode != -1)
                {
                    emulator.SendKeycode(lisa_keycode);
                }
                
                
                
                
                break;
            }
                
            case SDL_MOUSEBUTTONDOWN:
            case SDL_MOUSEBUTTONUP:
            {
                SDL_MouseButtonEvent button = event.button;
                Sint32 x = button.x;
                Sint32 y = button.y;
                bool buttonDown = button.state & 1;
                emulator.OnMouseMotion((int)x, (int)y, buttonDown ? 1 : -1);
                break;
            }
            default:
                break;
        }
    
    }
    int64_t clocks_before = cpu68k_clocks;
    int64_t clocks_executed = 0;
    int64_t clocks_per_frame = (int64_t)clocksPerFrame;
    while (clocks_executed < clocks_per_frame)
    {
        int target_clocks = (int)(clocks_per_frame - clocks_executed);
        emulator.Execute(target_clocks);
        int64_t clocks_after = cpu68k_clocks;
        clocks_executed = clocks_after - clocks_before;
    }

        //fprintf(stderr, "executed: %d\n", clocks);
        RenderLisaScreen();
        Uint32 frameEnd = SDL_GetTicks();
        if (frameEnd > nextDeciSecondTimer)
        {
            emulator.DeciSecondTimerClick();
            nextDeciSecondTimer= frameEnd + 100;
        }
        frameEnd = SDL_GetTicks();
//        Uint32 frameInterval = frameEnd - frameStart;
//        if (frameInterval < msPerFrame)
//        {
//            SDL_Delay(msPerFrame - frameInterval);
//        }
        
        nFrames++;
        if (nFrames == 60)
        {
            
            Uint32 endTicks = SDL_GetTicks();
            Uint32 interval = endTicks - startTicks;
            double seconds = interval / 1000.0;
            double fps = nFrames * 1000.0 / interval;
            double mhz = (cpu68k_clocks - lastClocks) * 1000.0 / (double)interval / 1000000.0;
            printf("Delta: %0.1fs %0.2ffps %0.2fMHz totalClocks: %lld\n",
                   seconds,
                   fps,
                   mhz,
                   cpu68k_clocks);
            startTicks = SDL_GetTicks();
            nFrames = 0;
            totalClocks = 0;
            lastClocks = cpu68k_clocks;
            
        }
        return false;
}

//void ExecuteEmulatorChunkVoid()
//{
//    ExecuteEmulatorChunk();
//}


void LisaUISDL::MainLoop()
{
    bool shouldQuit = false;
    // Aim for 60 fps
    int msPerFrame = 1000 / 60;
    while (!shouldQuit)
    {
        Uint32 frameStartTicks = SDL_GetTicks();
        shouldQuit = ExecuteEmulatorChunk();
        Uint32 frameEndTicks = SDL_GetTicks();
        Uint32 frameInterval = frameEndTicks - frameStartTicks;
        if (frameInterval < msPerFrame)
        {
            SDL_Delay(msPerFrame - (frameEndTicks - frameStartTicks));
        }
    }
}
