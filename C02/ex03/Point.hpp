#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include "Fixed.hpp"
class Point{
    private:
        Fixed const x;
        Fixed const y;
    public:
    //default constructor
    Point();
    //parametrised constructor
    Point(const float x1,const float y1);
    //default destructor
    ~Point();

};
#endif