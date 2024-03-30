cmake_minimum_required(VERSION 3.27)
project(TemplateTest)

set(CMAKE_CXX_STANDARD 17)

add_executable(TemplateTest main.cpp
        TemplateTest1.cpp
        TemplateTest2.cpp
        TemplateTest3.cpp
        Person1.cpp
        Person1.h
        TemplateFriend.cpp
        MyArray.hpp
        MyArrayTest.cpp)

add_executable(TemplateTest1 TemplateTest1.cpp)
add_executable(TemplateTest2 TemplateTest2.cpp)
add_executable(TemplateTest3 TemplateTest3.cpp)
add_executable(main main.cpp)
add_executable(TemplateFriend TemplateFriend.cpp)
add_executable(MyArrayTest MyArrayTest.cpp)