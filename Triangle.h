//
// Created by raspberry on 12.11.2020.
//
#include "Point.h"

#ifndef OOP_TRIANGLE_H
#define OOP_TRIANGLE_H


class Triangle {
private:
    Point _a ,_b ,_c;
public:
    Triangle ();
    Triangle(Point const &a , Point const &b ,Point const &c);
    Triangle(Triangle const &triangle);
    ~Triangle();
    Point get_a();
    Point get_b();
    Point get_c();
    void set_a(Point const &point);
    void set_b(Point const &point);
    void set_c(Point const &point);
    void show();
    bool is_triangle();
    double get_perimeter();
    double get_square();
    friend bool is_equal_square(Triangle const &first , Triangle const &second);
    friend void move(Triangle &triangle , int move_x , int move_y);
};


#endif //OOP_TRIANGLE_H
