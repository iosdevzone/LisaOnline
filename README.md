# LisaOnline
[LisaOnline](https://iosdevzone.github.io/LisaOnline/LisaOffice/LisaSdlTool.html) is an Apple Lisa emualtor that runs a browser.

This is a port of [Ray Arachelian's LisaEm](https://github.com/rayarachelian/lisaem) that can run in a browser.

Specifically, this meant:
* Porting the UI from [wxWidgets](https://www.wxwidgets.org) to [SDL](https://www.libsdl.org)
* Porting the build system from Ray's bespoke [bashbuild](https://github.com/rayarachelian/bashbuild) system to [CMake](https://github.com/rayarachelian/bashbuild)
* Building with [Emscripten](https://emscripten.org)

## Current Status
- [ ] Provide persistence
  - Returning user should be able to pick up where they left off.
  - User should be able to download disks.
- [ ] Upload files/disks.
  - Dragging a DC42 image should mount a floppy.
  - Dragging a text file should do somehting useful. 
