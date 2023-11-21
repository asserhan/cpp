#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include "Fixed.hpp"
class Point{
    private:
        const Fixed x;
        const Fixed y;
    public:
    //default constructor
    Point();
    //parametrised constructor
    Point(const float x1,const float y1);
    //copy constructor
    Point(const Point &oobj);
    //copy assignment operator
    Point &operator=(const Point &oobj);
    //default destructor
    ~Point();
    //getters
    Fixed getX()const;
    Fixed getY()const;

};
bool bsp( Point const a, Point const b,Point const c, Point const point);
#endif