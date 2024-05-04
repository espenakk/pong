
add_library(template_library TemplateClass/TemplateClass.cpp)

target_link_libraries(template_library PRIVATE raylib)

target_include_directories(template_library PRIVATE "${CMAKE_SOURCE_DIR}/include")