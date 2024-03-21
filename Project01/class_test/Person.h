//
// Created by lenovo on 2023/12/4.
//

#ifndef PROJECT01_PERSON_H
#define PROJECT01_PERSON_H

#include <string>

using namespace std;

class Person {

    string name;
    int age;
    int score;
    bool sex;

public:
    const string &getName() const;

    Person(const string &name);

    Person(int age);

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    int getScore() const;

    void setScore(int score);

    Person(const string &name, int age, int score);

    Person();

    void walk();

    void eat();

    explicit Person(bool sex);//explicit关键字不允许隐式调用,在创建时编译器也会自动加上
    //所以编译器也推荐我们在堆里创建对象
};


#endif //PROJECT01_PERSON_H
