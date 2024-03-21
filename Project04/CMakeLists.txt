cmake_minimum_required(VERSION 3.26)
project(Project04)

set(CMAKE_CXX_STANDARD 17)

add_executable(Project04 main.cpp
        P172.cpp
        P173.cpp)

add_executable(test P172.cpp)
add_executable(P173 P173.cpp)