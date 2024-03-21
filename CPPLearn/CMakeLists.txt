cmake_minimum_required(VERSION 3.26)
project(CPPLearn)

set(CMAKE_CXX_STANDARD 17)

add_executable(CPPLearn main.cpp
        problem1/problem1Test.cpp
        problem1/cylinder.cpp
        problem1/cylinder.h)

add_executable(problem1Test problem1/problem1Test.cpp)