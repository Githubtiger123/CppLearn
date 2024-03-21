//
// Created by lenovo on 2024/3/4.
//

#include <iostream>
#include "A.h"

A::A() {}

int A::getX() const {
    return x;
}

void A::setX(int x) {
    A::x = x;
}

int A::getY() const {
    return y;
}

void A::setY(int y) {
    A::y = y;
}

A::~A() {

}

A::A(const A &a) {

    std::cout << "A析构函数调用" << std::endl;
    this->x = a.x;
    this->y = a.y;

}
