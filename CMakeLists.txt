
cmake_minimum_required(VERSION 3.26)
set(CMAKE_CXX_STANDARD 20)

project(pong)
find_package(raylib REQUIRED)
add_subdirectory(bin)
add_subdirectory(lib)