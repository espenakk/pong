
cmake_minimum_required(VERSION 3.26)
set(CMAKE_CXX_STANDARD 20)

project(template_project)
find_package(raylib REQUIRED)
add_subdirectory(src)
add_subdirectory(bin)
add_subdirectory(lib)