//
// Created by lenovo on 2024/1/5.
//

#ifndef PROJECT03_PERSON_H
#define PROJECT03_PERSON_H

#include <string>

using namespace std;

class Person {

    string name;
    int age;
    int sex;

public:
    Person();

    Person(const string &name, int age, int sex);

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    int getSex() const;

    void setSex(int sex);

    void show();

//    Person(const Person & obj);
};


#endif //PROJECT03_PERSON_H
