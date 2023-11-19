#include "Point.hpp"

Point :: Point() : x(0),y(0){
    
}
Point :: Point(const float x1,const float y1) : x(x1),y(y1){

} 
Point :: Point(const Point &oobj)
{
    (*this) = oobj;
}
Fixed Point :: getX()const{
    return (this->x);
}
Fixed Point :: getY()const{
    return (this->y);
}
Point &Point :: operator=(const Point &oobj)
{
   (Fixed)this->x = oobj.getX();
    (Fixed)this->y = oobj.getY();
    return (*this);
}
Point :: ~Point(){

}


