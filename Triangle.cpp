//
// Created by raspberry on 12.11.2020.
//

#include "Triangle.h"
#include "Point.cpp"
#include <iostream>

Triangle::Triangle() {
    _a = Point();
    _b = Point();
    _c = Point();
}

Triangle::Triangle(const Point &a, const Point &b, const Point &c) {
    _a = Point(a);
    _b = Point(b);
    _c = Point(c);
}

Triangle::Triangle(const Triangle &triangle) {
    _a = Point(triangle._a);
    _b = Point(triangle._b);
    _c = Point(triangle._c);
}

Triangle::~Triangle() {
}

Point Triangle::get_a() {
    return _a;
}

Point Triangle::get_b() {
    return _b;
}

Point Triangle::get_c() {
    return _c;
}

void Triangle::set_a(const Point &point) {
    _a = Point(point);
}

void Triangle::set_b(const Point &point) {
    _b = Point(point);
}

void Triangle::set_c(const Point &point) {
    _c = Point(point);
}

void Triangle::show() {
    std::cout << "A=";
    _a.show();
    std::cout << "B=";
    _b.show();
    std::cout << "C=";
    _c.show();
}

bool is_triangle() {
    return false;
}

double Triangle::get_perimeter() {
    return get_distance(_a, _b) + get_distance(_a, _c) + get_distance(_b, _c);
}

double Triangle::get_square() {
    return sqrt(get_perimeter() * (get_perimeter() - get_distance(_a, _b)) * (get_perimeter() - get_distance(_a, _c)) *
                (get_perimeter() - get_distance(_b, _c)));
}