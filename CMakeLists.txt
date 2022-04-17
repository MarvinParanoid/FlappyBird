cmake_minimum_required(VERSION 3.21)
project(FlappyBird)
set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5 COMPONENTS window system audio graphics REQUIRED)

file(GLOB SOURCES "src/*.cpp")
add_executable(FlappyBird ${SOURCES})
target_link_libraries(FlappyBird sfml-graphics sfml-window sfml-system sfml-audio)

add_custom_command(
        TARGET FlappyBird POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/resources/
        ${CMAKE_CURRENT_BINARY_DIR}/resources/)