//
// Created by Tiger on 2024/3/15.
//

#include <iostream>

class Base {

public:
    int m_A = 20;

    void func() {

        std::cout << "Base::func()" << std::endl;
    }

    void func(int a) {

        std::cout << "Base::func(int)" << std::endl;
    }

};

class Son : public Base {

public:
    int m_A = 10;


    void func() {

        std::cout << "Son::func()" << std::endl;
    }

};

int main() {


    Son s;
    std::cout << s.m_A << std::endl;//子类属性
    std::cout << s.Base::m_A << std::endl;//父类属性
    s.func();
//    s.func(10);//同名函数在子类中会将父类的函数全部隐藏
    s.Base::func();
    s.Base::func(10);
    return 0;
}

