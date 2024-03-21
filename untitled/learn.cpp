//
// Created by lenovo on 2024/3/6.
//

#include <iostream>

class c1 {

    int a;

    void func(){

    }

};

int main() {

    std::cout << sizeof(c1) << std::endl;//空类的大小为1
    std::cout << sizeof(c1) << std::endl;//非空类按实际大小计算
    std::cout << sizeof(c1) << std::endl;//成员函数不计算在内
    //由此说明
    //1.空类的大小为1
    //2.非空类按实际大小计算
    //3.成员函数不计算在内
    //4.成员函数和成员变量时分开存储的


    return 0;
}