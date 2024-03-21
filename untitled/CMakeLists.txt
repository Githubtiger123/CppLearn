cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        Person.cpp
        Person.h
        A.cpp
        A.h
        learn.cpp)

add_executable(learn learn.cpp)