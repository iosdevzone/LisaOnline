cmake_minimum_required(VERSION 3.24)
project (libdc42)

set(LIB_DC42_SOURCES src/libdc42.c)
set(LIB_DC42_PUBLIC_HEADERS include/libdc42.h)

add_library(dc42 "")
target_sources(dc42
    PRIVATE ${LIB_DC42_SOURCES}
    PUBLIC  ${LIB_DC42_PUBLIC_HEADERS})
target_include_directories(dc42 PUBLIC
	src/include
	include)
