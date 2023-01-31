//
//  main.cpp
//  LisaSdlTool
//
//  Created by idz on 1/18/23.
//

// Empscripten
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#include <emscripten/html5.h>
#endif

// std
#include <iostream>
#include <dirent.h>

// SDL
#include <SDL.h>

// local
#include "LisaEmulator.h"
#include "LisaUISDL.h"

// Quick and dirty function to take some of the pain out of 
// generating the SDL -> Lisa key scan code switch.
void generate_key_table()
{
    for(char c = 'A'; c <= 'Z'; ++c)
    {
        printf("case SDL_SCANCODE_%c: return KEYCODE_%c;\n",c,c);
    }
    for(char c = '0'; c <= '9'; ++c)
    {
        printf("case SDL_SCANCODE_%c: return KEYCODE_%c;\n",c,c);
    }
}

// Debug function to dump the contents of the
// browser file system.
void dump_files(const char *root)
{
    DIR* dir = opendir(root);
    struct dirent *e;
    while((e = readdir(dir)) != NULL)
    {
        printf("%s\n", e->d_name);
    }
    closedir(dir);
}

LisaUISDL ui;

#ifdef __EMSCRIPTEN__
void EmsriptenMainLoop()
{
    ui.ExecuteEmulatorChunk();
}

void StartEmscriptenMainLoop()
{
    printf("__EMSCRIPTEN__\n");
    dump_files("/");
    auto time_value = time(NULL);
    FILE *f = fopen("/sentinal", "w");
    fprintf(f, "All your base are belong to us\n");
    fclose(f);
    emscripten_set_main_loop(EmsriptenMainLoop, 0, 1);
}
#endif

int main(int argc, const char* argv[])
{
#ifdef __EMSCRIPTEN__
    StartEmscriptenMainLoop();
#else
    ui.MainLoop();
#endif
}
