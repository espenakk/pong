
add_library(pong_library Game/Game.cpp Visuals/Visuals.cpp)
target_link_libraries(pong_library PUBLIC raylib)
target_include_directories(pong_library PUBLIC "${CMAKE_SOURCE_DIR}/include")

function(add_include_directories_recursively directory)
    file(GLOB children LIST_DIRECTORIES true RELATIVE ${directory} ${directory}/*)
    foreach(child ${children})
        if(IS_DIRECTORY ${directory}/${child})
            target_include_directories(pong_library PUBLIC ${directory}/${child})
            add_include_directories_recursively(${directory}/${child})
        endif()
    endforeach()
endfunction()

add_include_directories_recursively(${CMAKE_SOURCE_DIR}/lib)