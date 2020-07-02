cmake_minimum_required(VERSION 3.16)
project(App_name)

set(CMAKE_CXX_STANDARD 17)

# SFML
add_subdirectory(include/SFML)

add_executable(App_name main.cpp)

target_precompile_headers(App_name INTERFACE <vector> <string> <map> <utility> pch.h)

target_link_libraries(App_name PUBLIC sfml-graphics sfml-window sfml-system sfml-network sfml-audio)
