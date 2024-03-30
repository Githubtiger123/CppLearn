#include <string>
#include <iostream>

//
// Created by Tiger on 2024/3/24.
//
//类的模板对象做函数参数
//有三种传入方法，但是第一种最为常用
template<class T1, class T2>
class Person {

public:
    T1 name;
    T2 age;

    Person(T1 name, T2 age) : name(name), age(age) {}

};

void printPerson(Person<std::string, int> &person) { //指定传入的类型   --- 直接显示对象的数据类型

    std::cout << person.name << std::endl;
    std::cout << person.age << std::endl;
}


template<typename T1, typename T2>
void printPerson1(Person<T1, T2> &person) { //参数模板化           --- 将对象中的参数变为模板进行传递

    std::cout << person.name << std::endl;
    std::cout << person.age << std::endl;
    std::cout << typeid(T1).name() << std::endl;
    std::cout << typeid(T2).name() << std::endl;
}

template<typename T>
void printPerson2(T &person) { //整个类模板化       --- 将这个对象类型 模板化进行传递

    std::cout << person.name << std::endl;
    std::cout << person.age << std::endl;
    std::cout << typeid(T).name() << std::endl;
}

int main() {


    std::string s = "Tom";
    int age = 18;
    Person p1(s, age);
    printPerson2(p1);
    return 0;
}
