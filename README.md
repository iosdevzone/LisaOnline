# LisaOnline
An Apple Lisa emulator that runs in browsers.

This is a port of [Ray Arachelian's LisaEm](https://github.com/rayarachelian/lisaem) that can run in a browser.

Specifically, this meant:
* Porting the UI from [wxWidgets](https://www.wxwidgets.org) to [SDL](https://www.libsdl.org)
* Porting the build system from Ray's bespoke [bashbuild](https://github.com/rayarachelian/bashbuild) system to [CMake](https://github.com/rayarachelian/bashbuild)
* Building with [Emscripten](https://emscripten.org)
