//
// Created by lenovo on 2024/3/3.
//
/**
 * 建立类 cylinder,cylinder 的构造函数被传递了两个 double值,
 * 分别表示圆柱体的半径和高度。用类 cylinder 计算圆柱体的体积,
 * 并存储在一个 double 变量中。
 * 在类 cylinder 中包含一个成员函数vol,用来显示每个 cylinder 对象的体积。
 * @return
 */

#include <iostream>
#include "cylinder.h"

int main(){

    std::cout << "请输入圆柱的半径和高" << std::endl;
    double high,radius;
    std::cin >> radius >> high;
    (new cylinder(radius,high))->print_volume();
//    c->print_volume();
    return 0;
}
