//
// Created by lenovo on 2024/3/3.
//

#include <iostream>
#include "Person.h"
#include "A.h"

Person::Person() : age(4), score(5) {}

Person::Person(int age, int score) : age(age), score(score) {}

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

Person::~Person() {
    std::cout << "person析构函数调用" << std::endl;
//    if (a == NULL) {
    delete a;
//    }

}

Person::Person(const Person &person) {


    this->setAge(person.age);
    this->setScore(person.score);

//    this->a = person.a;//这样拷贝是不对的，是浅拷贝
    this->a = new A(*person.a);//这样才是正确的

}

