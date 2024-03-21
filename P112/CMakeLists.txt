cmake_minimum_required(VERSION 3.27)
project(P112)

set(CMAKE_CXX_STANDARD 17)

add_executable(P112 main.cpp
        friendTest.cpp
        firendTest1.cpp
        OperatorTest.cpp
        OperatorTest1.cpp
        OperatorTest1.cpp
        OperatorTest2.cpp
        inheritanceTest.cpp
        reproductionTest1.cpp
        sameNameTest.cpp
        sameNameTest2.cpp
        manyBaseTest.cpp
        diamond_Inheritance.cpp
        polymorphismTest.cpp
        CalculatorTest.cpp
        AbstractClassTest.cpp
        MakeDrink.cpp
        virtualDestructor.cpp
        ComputerTest.cpp
        WriteFile.cpp
        TemplateTest.cpp)

add_executable(friendTest friendTest.cpp)
add_executable(firendTest1 firendTest1.cpp
        firendTest1.cpp
        OperatorTest.cpp)
add_executable(OperatorTest OperatorTest.cpp
        OperatorTest.cpp)
add_executable(OperatorTest1 OperatorTest1.cpp)
add_executable(OperatorTest2 OperatorTest2.cpp)
add_executable(inheritanceTest inheritanceTest.cpp)
add_executable(reproductionTest1 reproductionTest1.cpp)
add_executable(sameNameTest sameNameTest.cpp)
add_executable(sameNameTest2 sameNameTest2.cpp)
add_executable(manyBaseTest manyBaseTest.cpp)
add_executable(diamond_Inheritance diamond_Inheritance.cpp)
add_executable(polymorphismTest polymorphismTest.cpp)
add_executable(CalculatorTest CalculatorTest.cpp)
add_executable(AbstractClassTest AbstractClassTest.cpp)
add_executable(MakeDrink MakeDrink.cpp)
add_executable(virtualDestructor virtualDestructor.cpp)
add_executable(ComputerTest ComputerTest.cpp)
add_executable(WriteFile WriteFile.cpp)
add_executable(TemplateTest TemplateTest.cpp)