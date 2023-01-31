//
//  LisaSDLKeycodes.cpp
//  LisaSdlTool
//
//  Created by idz on 1/27/23.
//

#include "LisaSDLKeycodes.h"

#include <keyscan.h>

int SDLScanCodeToLisaKeycode(SDL_Scancode sc)
{
    switch(sc)
    {
        case SDL_SCANCODE_A: return KEYCODE_A;
        case SDL_SCANCODE_B: return KEYCODE_B;
        case SDL_SCANCODE_C: return KEYCODE_C;
        case SDL_SCANCODE_D: return KEYCODE_D;
        case SDL_SCANCODE_E: return KEYCODE_E;
        case SDL_SCANCODE_F: return KEYCODE_F;
        case SDL_SCANCODE_G: return KEYCODE_G;
        case SDL_SCANCODE_H: return KEYCODE_H;
        case SDL_SCANCODE_I: return KEYCODE_I;
        case SDL_SCANCODE_J: return KEYCODE_J;
        case SDL_SCANCODE_K: return KEYCODE_K;
        case SDL_SCANCODE_L: return KEYCODE_L;
        case SDL_SCANCODE_M: return KEYCODE_M;
        case SDL_SCANCODE_N: return KEYCODE_N;
        case SDL_SCANCODE_O: return KEYCODE_O;
        case SDL_SCANCODE_P: return KEYCODE_P;
        case SDL_SCANCODE_Q: return KEYCODE_Q;
        case SDL_SCANCODE_R: return KEYCODE_R;
        case SDL_SCANCODE_S: return KEYCODE_S;
        case SDL_SCANCODE_T: return KEYCODE_T;
        case SDL_SCANCODE_U: return KEYCODE_U;
        case SDL_SCANCODE_V: return KEYCODE_V;
        case SDL_SCANCODE_W: return KEYCODE_W;
        case SDL_SCANCODE_X: return KEYCODE_X;
        case SDL_SCANCODE_Y: return KEYCODE_Y;
        case SDL_SCANCODE_Z: return KEYCODE_Z;
        // Numbers
        case SDL_SCANCODE_0: return KEYCODE_0;
        case SDL_SCANCODE_1: return KEYCODE_1;
        case SDL_SCANCODE_2: return KEYCODE_2;
        case SDL_SCANCODE_3: return KEYCODE_3;
        case SDL_SCANCODE_4: return KEYCODE_4;
        case SDL_SCANCODE_5: return KEYCODE_5;
        case SDL_SCANCODE_6: return KEYCODE_6;
        case SDL_SCANCODE_7: return KEYCODE_7;
        case SDL_SCANCODE_8: return KEYCODE_8;
        case SDL_SCANCODE_9: return KEYCODE_9;
        // Numpad
        case SDL_SCANCODE_KP_CLEAR: return KEYCODE_CLEAR;
        case SDL_SCANCODE_KP_MINUS: return KEYCODE_MINUS_NUM;
        case SDL_SCANCODE_KP_PLUS: return KEYCODE_PLUS_NUM;
        case SDL_SCANCODE_KP_MULTIPLY: return KEYCODE_STAR_NUM;
        case SDL_SCANCODE_KP_7: return KEYCODE_7NUM;
        case SDL_SCANCODE_KP_8: return KEYCODE_8NUM;
        case SDL_SCANCODE_KP_9: return KEYCODE_9NUM;
        case SDL_SCANCODE_KP_DIVIDE: return KEYCODE_FSLASH;
        case SDL_SCANCODE_KP_4: return KEYCODE_4NUM;
        case SDL_SCANCODE_KP_5: return KEYCODE_5NUM;
        case SDL_SCANCODE_KP_6: return KEYCODE_6NUM;
        case SDL_SCANCODE_KP_COMMA: return KEYCODE_COMMA_NUM;
        case SDL_SCANCODE_KP_1: return KEYCODE_1NUM;
        case SDL_SCANCODE_KP_2: return KEYCODE_2NUM;
        case SDL_SCANCODE_KP_3: return KEYCODE_3NUM;
        case SDL_SCANCODE_KP_ENTER: return KEYCODE_ENTERNUM;
        case SDL_SCANCODE_KP_0: return KEYCODE_0NUM;
        case SDL_SCANCODE_KP_PERIOD: return KEYCODE_DOTNUM;
        // Punctuation
        case SDL_SCANCODE_GRAVE: return KEYCODE_TILDE;
        case SDL_SCANCODE_PERIOD: return KEYCODE_DOT;
        case SDL_SCANCODE_SLASH: return KEYCODE_FSLASHQ;
        case SDL_SCANCODE_SPACE: return KEYCODE_SPACE;
        case SDL_SCANCODE_LEFTBRACKET: return KEYCODE_OBRAK;
        case SDL_SCANCODE_RIGHTBRACKET: return KEYCODE_CBRAK;
        case SDL_SCANCODE_BACKSLASH: return KEYCODE_BSLASH;
        case SDL_SCANCODE_MINUS: return KEYCODE_MINUS;
        case SDL_SCANCODE_EQUALS: return KEYCODE_PLUS;
        case SDL_SCANCODE_SEMICOLON: return KEYCODE_COLON;
        case SDL_SCANCODE_APOSTROPHE: return KEYCODE_QUOTE;
        case SDL_SCANCODE_COMMA: return KEYCODE_COMMA;
        // Modifiers
        case SDL_SCANCODE_LALT: return KEYCODE_LOPTION;
        case SDL_SCANCODE_RALT: return KEYCODE_OPTION;
        case SDL_SCANCODE_LSHIFT: return KEYCODE_SHIFT;
        case SDL_SCANCODE_RSHIFT: return KEYCODE_SHIFT;
        case SDL_SCANCODE_LGUI: return KEYCODE_LEFTCMD;
        case SDL_SCANCODE_RGUI: return KEYCODE_COMMAND;
        // Motion
        case SDL_SCANCODE_BACKSPACE: return KEYCODE_BACKSPACE;
        case SDL_SCANCODE_RETURN: return KEYCODE_RETURN;
        case SDL_SCANCODE_TAB: return KEYCODE_TAB;
        case SDL_SCANCODE_LEFT: return KEYCODE_CURSORL;
        case SDL_SCANCODE_RIGHT: return KEYCODE_CURSORR;
        case SDL_SCANCODE_UP: return KEYCODE_CURSORU;
        case SDL_SCANCODE_DOWN: return KEYCODE_CURSORD;
        default: return -1;
    }
}

