//
// Created by Tiger on 2024/3/15.
//

#include <iostream>

class Base {

public:
    static int num;

    static void func() {
        std::cout << "父类中的func" << std::endl;
    }
    static void func(int a) {
        std::cout << "子类中的func" << std::endl;
    }

};

int Base::num = 10;

class Son : public Base {

public:
    static int num;

    static void func() {
        std::cout << "子类中的func" << std::endl;
    }


};

int Son::num = 20;

int main() {

    Son son;
    std::cout << son.num << std::endl;//通过对象访问子类静态变量
    std::cout << son.Base::num << std::endl;//通过对象访问父类静态变量
    std::cout << Son::num << std::endl;//通过类访问子类静态变量
    std::cout << Son::Base::num << std::endl;//通过类访问父类静态变量

    son.func();//对象访问子类静态函数
    son.Base::func();//对象访问父类静态函数
    Son::func();//类访问子类静态函数
    Son::Base::func();//类访问父类静态函数

//    Son::func(1); //在子类中全部隐藏
    return 0;
}
