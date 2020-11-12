//
// Created by raspberry on 12.11.2020.
//

#ifndef OOP_POINT_H
#define OOP_POINT_H

class Point{
private:
    int _x , _y;
public:
    Point(int x  , int y );
    Point();
    Point(Point const &point);
    ~Point();
    void set_x(int x);
    void set_y(int y);
    int get_x();
    int get_y();
    void show();
    friend bool is_equal(Point const &first , Point const &second);
    friend double get_distance(Point const &first , Point const &second);
};

#endif //OOP_POINT_H
