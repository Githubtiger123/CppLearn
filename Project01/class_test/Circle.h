//
// Created by lenovo on 2023/12/5.
//

#ifndef PROJECT01_CIRCLE_H
#define PROJECT01_CIRCLE_H


#include "Point.h"

class Circle {

    Point center;

    int radius;
public:
    const Point &getCenter() const;

    void setCenter(const Point &center);

    int getRadius() const;

    void setRadius(int radius);

    Circle(const Point &center, int radius);

    Circle();
};


#endif //PROJECT01_CIRCLE_H
