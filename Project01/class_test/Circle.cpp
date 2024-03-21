//
// Created by lenovo on 2023/12/5.
//

#include "Circle.h"

Circle::Circle() {}

Circle::Circle(const Point &center, int radius) : center(center), radius(radius) {}

const Point &Circle::getCenter() const {
    return center;
}

void Circle::setCenter(const Point &center) {
    Circle::center = center;
}

int Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(int radius) {
    Circle::radius = radius;
}
