cmake_minimum_required(VERSION 3.21)
project(stack_data_structure)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(stack_data_structure
        Main.cpp
        Stack.cpp
        Stack.h)
