//
// Created by lenovo on 2024/3/3.
//

#ifndef CPPLEARN_CYLINDER_H
#define CPPLEARN_CYLINDER_H


class cylinder {

private:
    double radius;
    double high;
    double volume;

public:

    cylinder();

    cylinder(double radius, double high);

    cylinder(double radius, double high, double volume);

    double getradius() const;

    void setradius(double radius);

    double gethigh() const;

    void sethigh(double high);

    double getVolume() const;

    void setVolume(double volume);

    void print_volume();



};


#endif //CPPLEARN_CYLINDER_H
