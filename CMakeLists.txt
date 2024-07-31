
cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 20)

project(arcade)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=undefined,address") #For compiling on linux, raylib throws errors if these flags aren't set
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=undefined,address")

find_package(raylib REQUIRED)
add_subdirectory(src)
add_subdirectory(lib)