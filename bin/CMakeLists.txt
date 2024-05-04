
add_executable(template_project main.cpp)
target_link_libraries(template_project PRIVATE template_library)
target_include_directories(template_project PRIVATE "${CMAKE_SOURCE_DIR}/include")
