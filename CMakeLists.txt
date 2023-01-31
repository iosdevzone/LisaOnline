cmake_minimum_required(VERSION 3.24)
project (LisaOnline)

if(EMSCRIPTEN)
set(CMAKE_EXECUTABLE_SUFFIX ".html")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s USE_SDL=2")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} \
	-s ALLOW_MEMORY_GROWTH=1 \
	-s USE_SDL=2 \
	-s USE_SDL_MIXER=2 \
	--emrun \
	--preload-file ${CMAKE_CURRENT_SOURCE_DIR}/boot.ROM@boot.ROM \
	--preload-file ${CMAKE_CURRENT_SOURCE_DIR}/LisaHardDisk.dc42@LisaHardDisk.dc42 \
	--preload-file ${CMAKE_CURRENT_SOURCE_DIR}/LisaOfficeHardDisk.dc42@LisaOfficeHardDisk.dc42"
)
endif()

set(LIB_GENERATOR_SOURCES
 	src/lib/libGenerator/generator/cpu68k.c
 	src/lib/libGenerator/generator/reg68k.c
 	src/lib/libGenerator/generator/diss68k.c
 	src/lib/libGenerator/generator/ui_log.c
 	src/lib/libGenerator/cpu68k/tab68k.c
 	src/lib/libGenerator/cpu68k/cpu68k-0.c
 	src/lib/libGenerator/cpu68k/cpu68k-1.c
 	src/lib/libGenerator/cpu68k/cpu68k-2.c
 	src/lib/libGenerator/cpu68k/cpu68k-3.c
 	src/lib/libGenerator/cpu68k/cpu68k-4.c
 	src/lib/libGenerator/cpu68k/cpu68k-5.c
 	src/lib/libGenerator/cpu68k/cpu68k-6.c
 	src/lib/libGenerator/cpu68k/cpu68k-7.c
 	src/lib/libGenerator/cpu68k/cpu68k-8.c
 	src/lib/libGenerator/cpu68k/cpu68k-9.c
 	src/lib/libGenerator/cpu68k/cpu68k-a.c
 	src/lib/libGenerator/cpu68k/cpu68k-b.c
 	src/lib/libGenerator/cpu68k/cpu68k-c.c
 	src/lib/libGenerator/cpu68k/cpu68k-d.c
 	src/lib/libGenerator/cpu68k/cpu68k-e.c
 	src/lib/libGenerator/cpu68k/cpu68k-f.c
)

add_library(Generator ${LIB_GENERATOR_SOURCES})
target_include_directories(Generator PUBLIC
	src/include
	src/lib/libdc42/include
	src/lib/libGenerator/include)

set(LIB_LISA_SOURCES 
	src/storage/hle.c
	src/storage/profile.c
	src/lisa/motherboard/fliflo_queue.c
	src/lisa/motherboard/glue.c
	src/lisa/motherboard/symbols.c
	src/lisa/motherboard/unvars.c
	src/lisa/motherboard/vars.c
	src/lisa/cpu_board/irq.c
	src/lisa/cpu_board/memory.c
	src/lisa/cpu_board/mmu.c
	src/lisa/cpu_board/rom.c
	src/lisa/cpu_board/romless.c
	src/lisa/io_board/cops.c
	src/lisa/io_board/floppy.c
	src/lisa/io_board/via6522.c
	src/lisa/io_board/z8530-pty.c
	src/lisa/io_board/z8530-telnetd.c
	src/lisa/io_board/z8530-tty.c
	src/lisa/io_board/z8530.c
	)

add_library(lisa ${LIB_LISA_SOURCES})
target_include_directories(lisa PUBLIC
	src/lisa/keyboard/include
	src/include 
	src/lib/libGenerator/include
	src/lib/libdc42/include
	)

set(LIB_DC42_SOURCES
	src/lib/libdc42/src/libdc42.c)
add_library(dc42 ${LIB_DC42_SOURCES})
target_include_directories(dc42 PUBLIC
	src/include
	src/lib/libdc42/include)



find_package(SDL2 REQUIRED)


add_executable(LisaSdlTool 
	./src/LisaSdlTool/main.cpp
	./src/LisaSdlTool/LisaEmulator.cpp
	./src/LisaSdlTool/LisaUISDL.cpp
	./src/LisaSdlTool/LisaSDLKeycodes.cpp
	./src/LisaSdlTool/LisaEmulatorCallbacks.cpp
	)
target_include_directories(LisaSdlTool PUBLIC
	src/include 
	src/lib/libGenerator/include
	src/lib/libdc42/include
	${SDL2_INCLUDE_DIRS})
target_link_libraries(LisaSdlTool ${SDL2_LIBRARIES} lisa Generator dc42)

