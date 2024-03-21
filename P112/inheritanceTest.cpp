//
// Created by Tiger on 2024/3/13.
//

#include <iostream>

class Creature {

public:
    void reproduction() {
        std::cout << "生物繁殖" << std::endl;
    }
};

class Person : public Creature {

public:
    void study() {
        std::cout << "人学习" << std::endl;
    }
};


class Cat : public Creature {

public:
    void miao() {
        std::cout << "小猫喵喵叫" << std::endl;
    }
};

class Dog : public Creature {

public:
    void wang() {
        std::cout << "小狗汪汪汪" << std::endl;
    }
};

//测试重写权限修饰符的影响
class A{

private:
    virtual void private_func(){
        std::cout << "父类private函数调用" << std::endl;
    }

public:
    virtual void public_func(){

        std::cout << "父类public函数调用" << std::endl;
    }
};

class B:public A{

public:
    void public_func() override {
        std::cout << "重写public" << std::endl;
    }

public:
    void private_func() override {//可以继承私有方法,但是其权限一定比子类大确保类外可以访问
        std::cout << "重写private" << std::endl;

    }
};

int main() {

    Person person;
    person.reproduction();
    person.study();
    Dog dog;
    dog.wang();
    Cat cat;
    cat.miao();
    std::cout << "_____________________________" << std::endl;
    B b;
    b.public_func();
    b.private_func();
    return 0;
}
