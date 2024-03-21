cmake_minimum_required(VERSION 3.26)
project(Project01)

set(CMAKE_CXX_STANDARD 17)

add_executable(Project01 main.cpp
        class_test/Person.cpp
        class_test/Person.h
        class_test/Circle.cpp
        class_test/Circle.h
        class_test/Point.cpp
        class_test/Point.h)
