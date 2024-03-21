//
// Created by lenovo on 2024/3/4.
//

#ifndef UNTITLED_A_H
#define UNTITLED_A_H


class A {

private:
    int x;
    int y;

public:
    A();

    A(int x, int y) : x(x), y(y) {}

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    virtual ~A();

    A(const A& a);
};


#endif //UNTITLED_A_H
