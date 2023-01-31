//
//  LisaUISDL.hpp
//  LisaSdlTool
//
//  Created by idz on 1/27/23.
//

#ifndef LisaUISDL_h
#define LisaUISDL_h

#include <SDL2/SDL.h>

#include "LisaEmulator.h"

class LisaUISDL
{
public:
    LisaUISDL();
    
    void MainLoop();
    bool ExecuteEmulatorChunk();
    
    void MessageBox(const char *pMessage, const char *pTitle);
private:
  
    void RenderLisaScreen();
    void OnDropFile(const SDL_DropEvent& dropEvent);
    void OnQuit(double clocksPerFrame);
    
    SDL_Window* WindowGet() { return mpWindow; }
    SDL_Renderer* RendererGet() { return mpRenderer; }
    SDL_Surface* SurfaceGet() { return mpSurface; }
    LisaEmulator& EmulatorGet() { return mEmulator; }
    
    SDL_Window *mpWindow;
    SDL_Renderer *mpRenderer;
    SDL_Surface *mpSurface;
    
    LisaEmulator mEmulator;
    
};

#endif /* LisaUISDL_h */
