//
// Created by lenovo on 2024/3/3.
//

#include <iostream>
#include "cylinder.h"

cylinder::cylinder(double radius, double high, double volume) : radius(radius), high(high), volume(volume) {}

double cylinder::getradius() const {
    return radius;
}

void cylinder::setradius(double radius) {
    cylinder::radius = radius;
}

double cylinder::gethigh() const {
    return high;
}

void cylinder::sethigh(double high) {
    cylinder::high = high;
}

double cylinder::getVolume() const {
    return volume;
}

void cylinder::setVolume(double volume) {
    cylinder::volume = volume;
}

cylinder::cylinder(double radius, double high) : radius(radius), high(high) {}

cylinder::cylinder() {}

void cylinder::print_volume() {

    cylinder::volume = cylinder::high * cylinder::radius * 3.14;
    std::cout << cylinder::volume << std::endl;
}
