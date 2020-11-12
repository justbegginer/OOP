//
// Created by raspberry on 12.11.2020.
//
#include "math.h"
#include <iostream>
#include "Point.h"

Point::Point() {
    _x = 0;
    _y = 0;
}

Point::Point(int x, int y) {
    _x = x;
    _y = y;
}

Point::Point(const Point &point) {
    _x = point._x;
    _y = point._y;
}

int Point::get_x() {
    return _x;
}

int Point::get_y() {
    return _y;
}

void Point::set_x(int x) {
    _x = x;
}

void Point::set_y(int y) {
    _y = y;
}

void Point::show() {
    std::cout << "(x=" << _x <<", y=" <<_y<<")\n";
}

bool is_equal(const Point &first, const Point &second) {
    return (first._x == second._x && first._y == second._y);
}

double get_distance(Point const &first , Point const &second){
    return sqrt(pow(first._x -second._x , 2) + pow(first._y - second._y , 2));
}