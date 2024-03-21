//
// Created by lenovo on 2023/12/5.
//

#include <iostream>
#include "Point.h"

Point::Point() {}

Point::Point(int x, int y) : x(x), y(y) {}

int Point::getX() const {
    return x;
}

void Point::setX(int x) {
    Point::x = x;
}

int Point::getY() const {
    return y;
}

void Point::setY(int y) {
    Point::y = y;
}
int Point::t = 50;
void Point::staticMothed() {

    std::cout << "这是一个静态方法" <<std::endl;
    std::cout << t <<std::endl;
//    std::cout << x <<std::endl;//静态方法无法调用非静态便令
}

void Point::Mothed() {
    std::cout << t <<std::endl;
}

Point::Point(int x):x(x) {}

Point::Point(Point &point) {

    Point::x = point.x+1;
    Point::y = point.y+1;
}



