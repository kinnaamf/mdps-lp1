cmake_minimum_required(VERSION 4.0)
project(graphs)

set(CMAKE_CXX_STANDARD 20)

add_executable(graphs src/main.cpp
        include/input_functions.h
        include/conversion_functions.h
        include/display_functions.h
        include/menu.h
        include/save_list.h
)
