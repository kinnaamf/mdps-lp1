cmake_minimum_required(VERSION 4.0)
project(graphs)

set(CMAKE_CXX_STANDARD 20)

add_executable(graphs main.cpp
        input_functions.h
        conversion_functions.h
        display_functions.h
        menu.h
)
