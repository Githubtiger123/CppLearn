//
// Created by lenovo on 2023/12/5.
//

#ifndef PROJECT01_POINT_H
#define PROJECT01_POINT_H


class Point {

    int x;
    int y;

public:
    static int t;

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    Point(int x, int y);

    Point();

    static void staticMothed();
    void Mothed();

    explicit Point(int x);

    Point(Point& point);
};


#endif //PROJECT01_POINT_H
