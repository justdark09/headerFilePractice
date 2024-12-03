cmake_minimum_required(VERSION 3.29)
project(headerFilePractice)

set(CMAKE_CXX_STANDARD 20)

add_executable(headerFilePractice main.cpp
        calculate.cpp
        calculate.h)
