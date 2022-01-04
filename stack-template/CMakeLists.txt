cmake_minimum_required(VERSION 3.21)
project(stack_template)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(stack_template
        Main.cpp
        StackTemplate.cpp
        StackTemplate.h)
