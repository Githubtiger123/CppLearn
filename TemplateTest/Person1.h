//
// Created by Tiger on 2024/3/25.
//

#ifndef TEMPLATETEST_PERSON1_H
#define TEMPLATETEST_PERSON1_H

#include <iostream>

template<typename T1, typename T2>
class Person1 {

public:
    T1 name;
    T2 age;

    Person1(T1 name, T2 age) : name(name), age(age) {}

    void info();

    void func(); // 在类外实现


};

//模板类由于只有在调用时生成创建，编译过后链接不到(不在同一文件需要向别的文件找，别的文件又没有创建最终造成错误)
template<typename T1, typename T2>
void Person1<T1, T2>::info() {

    std::cout << "同一个文件件实现类模板函数类外实现" << std::endl;
}


#endif //TEMPLATETEST_PERSON1_H
