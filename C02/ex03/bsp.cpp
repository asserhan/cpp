#include "Point.hpp"
#include "Fixed.hpp"
Fixed absolute(Fixed a)
{
    if(a < 0)
        return (a * -1);
    return (a);
}
Fixed TriangleArea(Point const a,Point const b,Point const c){
    return(absolute(((a.getX() * (b.getY() - c.getY())) - (b.getX() * (a.getY() - c.getY())) + (c.getX() * (a.getY() - b.getY()))) / 2));
}

bool bsp( Point const a, Point const b,Point const c, Point const point){

    Fixed abc_area= TriangleArea(a,b,c);
    Fixed pab_area= TriangleArea(point,a,b);
    Fixed pbc_area= TriangleArea(point,b,c);
    Fixed pac_area= TriangleArea(point,a,c);
    if(abc_area == 0 || pab_area == 0 || pbc_area == 0 || pac_area == 0)
        return (false);
    return (abc_area == (pab_area + pbc_area + pac_area));
}