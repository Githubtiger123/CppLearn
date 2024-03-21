//
// Created by Tiger on 2024/3/13.
//
//函数调用运算符的重载(仿函数的调用)

#include "iostream"
#include "string"

class Person {

public:
    int age;
    int score;

    Person(int age, int score) : age(age), score(score) {}

    //函数调用运算符的重载(仿函数)
    //只能在函数内部写
    void operator()(const std::string &s) {
        std::cout << s << std::endl;
    }
};

class MyAdd {

public:
    Person operator()(const Person &p, const Person &p1) {

        return Person(p.age + p1.age, p.score + p1.score);
    }
};

int main() {


    Person p(10, 20);
    Person p1(11, 21);
    p("12345");
    MyAdd add;
    Person person = add(p1, p);
    return 0;
}

