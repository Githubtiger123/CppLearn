#include <iostream>

//
// Created by Tiger on 2024/3/19.
//
//虚析构函数和纯虚析构函数
//多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//因为没有重写父类中的虚构函数(即父类和子类都有各自的析构函数)
//要是将其改为纯虚构函数或则虚析构函数即可解决这一问题，则父类指针释放时会自动调用子类的析构函数
//但是更建议类改为纯虚和析构函数，因为传虚析构函数一定要实现，用于释放本类中的堆区属性
//调用子类的析构函数(父类中是虚析构函数)时子类的析构函数首先被调用，然后调用父类的析构函数
//纯虚析构同理
class Base {

public:
    int *ptr = new int(20);

    virtual void speak() = 0;

//    ~Base() { //普通的析构函数，多态后只能调用父类的子类的调用不到
//
//        if (ptr != nullptr) {
//            std::cout << "Base析构函数调用" << std::endl;
//            delete ptr;
//            ptr = nullptr;
//        }
//    }

//    virtual ~Base() { //改写成虚析构函数即可先调用子类析构，后调用父类析构
//
//        if (ptr != nullptr) {
//            std::cout << "Base析构函数调用" << std::endl;
//            delete ptr;
//            ptr = nullptr;
//        }
//    }

    virtual ~Base() = 0; //纯虚析构函数

};

//纯虚析构函数也是同样,先调用子类的析构，后调用父类的析构
Base::~Base() {

    if (ptr != nullptr) {
        std::cout << "Base析构函数调用" << std::endl;
        delete ptr;
        ptr = nullptr;
    }
}

class Son : public Base {

public:
    int *ptr1 = new int(10);

    void speak() override {
        std::cout << "实现speak函数" << std::endl;
    }


    ~Son() {

        if (ptr1 != nullptr) {
            std::cout << "Son析构函数调用" << std::endl;
            delete ptr1;
            ptr1 = nullptr;
        }
    }
};

int main() {

    Base *base = new Son();
    base->speak();
    delete base;
    return 0;
}
