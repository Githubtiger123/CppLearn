//
// Created by lenovo on 2023/12/4.
//

#include <iostream>
#include "Person.h"

Person::Person() {}

Person::Person(const string &name, int age, int score) : name(name), age(age), score(score) {}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

int Person::getScore() const {
    return score;
}

void Person::setScore(int score) {
    Person::score = score;
}

void Person::walk() {

    std::cout << name << ":走路" << std::endl;
}

void Person::eat() {

    std::cout << name << ":吃饭" << std::endl;
}

Person::Person(const string &name) : name(name) {}

Person::Person(int age) : age(age) {}

Person::Person(bool sex) : sex(sex) {}

