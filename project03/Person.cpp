//
// Created by lenovo on 2024/1/5.
//

#include <iostream>
#include "Person.h"

const string &Person::getName() const {
    return name;
}

Person::Person() {}

Person::Person(const string &name, int age, int sex) : name(name), age(age), sex(sex) {}

void Person::setName(const string &name) {
    Person::name = name;
}


int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

int Person::getSex() const {
    return sex;
}

void Person::setSex(int sex) {
    Person::sex = sex;
}

void Person::show() {

    std::cout << "name:" + name + "age:" << age << "sex:" << (sex == 1 ? "boy" : "girl") << std::endl;
}

//Person::Person(const Person &obj) {
//
//    age = 20 + obj.age;
//
//}


