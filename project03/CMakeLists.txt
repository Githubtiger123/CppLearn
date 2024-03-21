cmake_minimum_required(VERSION 3.26)
project(project03)

set(CMAKE_CXX_STANDARD 17)

add_executable(project03 main.cpp
        Person.cpp
        Person.h)
