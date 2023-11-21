#include "Point.hpp"
int main(){
    Point a(4, 3);
    Point b(4, 0);
    Point c(5, 6);
    //Point point(2, 1);

    Point point(5, 0);
    if(bsp(a,b,c,point))
        std :: cout << "Point is inside the triangle" << std :: endl;
    else
        std :: cout << "Point is not inside the triangle" << std :: endl;
    return (0);
}