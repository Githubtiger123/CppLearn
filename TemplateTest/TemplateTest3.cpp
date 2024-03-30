#include <iostream>

//
// Created by Tiger on 2024/3/24.
//
//类模板成员函数类外实现
template<typename T>
class Base {

public:
    T num;

    explicit Base(T num) : num(num) {}//explicit 关键字禁止隐式转换
    Base(T n, int num);

    void info(T t) {
        std::cout << t << std::endl;
    }

    void info1(T t);

    void info2();
};

template<typename T>
void Base<T>::info2() {//没有用到模板参数也要加template<typename T>，并且指定作用域要加上模板类型Base<T>::

}

template<typename T>
Base<T>::Base(T n, int num) {

    std::cout << "类外实现构造函数" << std::endl;
    this->num = n;
}

template<typename T>
void Base<T>::info1(T t) {

    std::cout << "类外实现函数" << std::endl;
}

int main() {


    //Base<int> base = 10;//explicit关键字仅用了隐式转换
    Base<int> base(10);
    Base<int> base1(10, 20);
    base.info(10);

    return 0;
}
