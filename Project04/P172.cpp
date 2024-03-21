//
// Created by lenovo on 2024/1/12.
//
//P172 06 模板-普通函数与函数模板调用规则
/**
 * 1.如果函数模板和普通函数都可以实现,优先调用普通函数
 * 2.可以通过空模板参数列表来强制调用函数模板
 * 3. 函数模板也可以发生重载
 * 4,如果函数模板可以产生更好的匹配,优先调用函数模板
 *
 * 建议:只保留其一
 */
#include <iostream>

void myPrint(int a, int b) {

    std::cout << "普通函数" << std::endl;
}

template<typename T>
void myPrint(T a, T b) {

    std::cout << "函数模板" << std::endl;
}

template<typename T>
void myPrint(T a, T b, T c) {
    std::cout << "重载函数模板" << std::endl;
}


int main() {

    myPrint(10, 20);//普通函数和函数模板重载后优先调用普通函数
    myPrint<int>(10, 20);//可以通过空模板参数列表 强制调用 函数模板
    myPrint(10, 20, 50);//函数模板重载
    myPrint('a', 'b');//.如果函数模板可以产生更好的匹配，优先调用函数模板
    return 0;
}