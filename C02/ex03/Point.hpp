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
    Fixed getX()const;
    Fixed getY()const;

};
#endif