//
// Created by Tiger on 2024/3/13.
//

#include <iostream>

class Base1 {

public:
    int m_A = 10;
protected:
    int m_B = 20;
private:
    int m_C = 30;

};


class Son1 : public Base1 {

public:

    int my;

    void test() {
        std::cout << m_A << std::endl;//以公共方式继承父类，父类的public属性可以被访问
        std::cout << m_B << std::endl;//以公共方式继承父类，父类的protected属性可以被访问
//        std::cout << m_C << std::endl;//以公共方式继承父类，父类的private属性不可以被访问
    }
};

class Son2 : protected Base1 {

public:
    void test() {
        std::cout << m_A << std::endl;//以保护方式继承父类，父类的public属性变为protected
        std::cout << m_B << std::endl;//以保护方式继承父类，父类的protected属性变为protected
//        std::cout << m_C << std::endl;//以公共方式继承父类，父类的private属性不可以被访问
    }
};


class Son3 : private Base1 {

public:
    void test() {
        std::cout << m_A << std::endl;//以私有方式继承父类，父类的public属性变为private，只能在本类访问
        std::cout << m_B << std::endl;//以私有方式继承父类，父类的rotected属性变为private，只能在本类访问
//        std::cout << m_C << std::endl;//以公共方式继承父类，父类的private属性不可以被访问
    }
};

int main() {

    Son1 son1;
//    son1.m_B;//父类的protected属性类外不可以被访问
    Son2 son2;
//    son2.m_A; //父类中public权限变为protected，类外不可以被访问，只能在本类和派生类中使用
    std::cout << sizeof(son1) << std::endl; //父类中非静态成员属性都会被继承下去
    return 0;
}
