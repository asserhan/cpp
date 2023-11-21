#include "Point.hpp"
int main(){
    Point a(0, 0);
    Point b(4, 0);
    Point c(2, 3);
    Point point(2, 1); // inside
    //Point point(5, 2); // outside
    //Point point(2,3); // on the edge
    if(bsp(a,b,c,point ) == true )
        std :: cout << "Point is inside the triangle" << std :: endl;
    else
        std :: cout << "Point is outside the triangle" << std :: endl;
    return (0);
}