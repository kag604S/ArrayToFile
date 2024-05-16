cmake_minimum_required(VERSION 3.28)
project(tableinfile)

set(CMAKE_CXX_STANDARD 17)

add_executable(tableinfile main.cpp
        array.cpp
        array.h)
