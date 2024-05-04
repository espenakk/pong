
add_executable(template_app app.cpp)
target_link_libraries(template_app PRIVATE template_library)
target_include_directories(template_app PRIVATE "${CMAKE_SOURCE_DIR}/include")