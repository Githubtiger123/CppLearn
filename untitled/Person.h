//
// Created by lenovo on 2024/3/3.
//

#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H


#include "A.h"

class Person {

private:
    int age;
    int score;

public:
    A *a;

public:
    Person();

    Person(int age, int score);

    int getAge() const;

    void setAge(int age);

    int getScore() const;

    void setScore(int score);

    virtual ~Person();

    Person(const Person& person);

};


#endif //UNTITLED_PERSON_H
