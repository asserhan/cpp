#include "Point.hpp"
#include "Fixed.hpp"
Fixed absolute(Fixed a)
{
    if(a < 0)
        return (a * -1);
    return (a);
}
Fixed TriangleArea(Point const a,Point const b,Point const c){
    return(absolute((a.getX() * (b.getY() - c.getY())) - 
        (b.getX() * (a.getY() - c.getY())) + 
        (c.getX() * (a.getY() - b.getY()))) / 2);
}

bool bsp( Point const a, Point const b,Point const c, Point const point){
    Fixed abc_area= TriangleArea(a,b,c);
    Fixed pab_area= TriangleArea(point,a,b);
    Fixed pbc_area= TriangleArea(point,b,c);
    Fixed pac_area= TriangleArea(point,a,c);
    std :: cout << "abc_area : " << abc_area << std :: endl;
    std :: cout << "pab_area : " << pab_area << std :: endl;
    std :: cout << "pbc_area : " << pbc_area << std :: endl;
    std :: cout << "pac_area : " << pac_area << std :: endl;
    return (abc_area == (pab_area + pbc_area + pac_area));
}