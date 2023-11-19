#include "Fixed.hpp"

Fixed :: Fixed(){
    this->fixed_raw = 0;
    // std :: cout << "Default constructor called" << std :: endl;
}
Fixed ::  ~Fixed(){
    // std :: cout << "Destructor called" << std :: endl;
}
Fixed :: Fixed(const Fixed &oobj)
{
    // std :: cout << "Copy constructor called" << std :: endl;
    (*this) = oobj;

}
Fixed &Fixed :: operator=(const Fixed &oobj)
{
    // std :: cout << "Copy assignment operator called" << std :: endl;
    this->fixed_raw = oobj.fixed_raw;
    return (*this);
}
int Fixed :: getRawBits( void) const{
    // std :: cout << "getRawBits member function called"<< std :: endl;
    return(this->fixed_raw);
}
void Fixed :: setRawBits( int const raw){
    fixed_raw = raw;
}
Fixed :: Fixed(const int digit)
{
    // std :: cout << "Int constructor called" << std :: endl;
    this->fixed_raw = digit << fract;

}
Fixed :: Fixed(const float digit)
{
    // std :: cout << "Float constructor called" << std :: endl;
    this->fixed_raw = roundf(digit * (1 << fract));
}
float Fixed :: toFloat(void) const{
    return((float)this->fixed_raw / (1 << fract)); 
}
int Fixed :: toInt(void) const {
    return(this->fixed_raw >> fract);
}
//overload << operator
std :: ostream &operator<<(std :: ostream &os,const Fixed &oobj)
{
    os << oobj.toFloat();
    return (os);

}
bool Fixed :: operator>(const Fixed &obj)const{
    return(this->fixed_raw > obj.fixed_raw);
}
bool Fixed :: operator<(const Fixed &obj)const{
    return(this->fixed_raw < obj.fixed_raw);
}
bool Fixed :: operator<=(const Fixed &obj)const{
    return(this->fixed_raw <= obj.fixed_raw);
}
bool Fixed :: operator>=(const Fixed &obj)const{
    return(this->fixed_raw >= obj.fixed_raw);
}
bool Fixed :: operator==(const Fixed &obj)const{
    return(this->fixed_raw == obj.fixed_raw);
}
bool Fixed :: operator!=(const Fixed &obj)const{
    return(this->fixed_raw != obj.fixed_raw);
}
Fixed Fixed :: operator+(const Fixed &obj)const{
    return(this->fixed_raw + obj.fixed_raw);
}
Fixed Fixed :: operator-(const Fixed &obj)const{
    return(this->fixed_raw - obj.fixed_raw);
}
Fixed Fixed :: operator*(const Fixed &obj)const{
    return(this->toFloat() * obj.toFloat());
}
Fixed Fixed :: operator/(const Fixed &obj)const{
    return(this->fixed_raw / obj.fixed_raw);
}
Fixed &Fixed :: operator++()
{
   this->fixed_raw++;
    return(*this);
}
Fixed Fixed :: operator++(int)
{
    Fixed res(*this);
    ++(*this);
    return(res);
}
Fixed &Fixed :: operator--()
{
    this->fixed_raw--;
    return(*this);
}
Fixed Fixed :: operator--(int)
{
    Fixed res(*this);
    --(*this);
    return(res);
}
const Fixed &Fixed :: min_Cfixed(const Fixed&o1,const Fixed &o2){
    if(o1 < o2)
        return(o1);
    else
        return(o2);
}
Fixed &Fixed :: min_Fixed(Fixed &o1,Fixed &o2){
    if(o1 < o2)
        return(o1);
    else
        return(o2);
}
const Fixed &Fixed :: max_Cfixed(const Fixed&o1,const Fixed &o2){
    if(o1 > o2)
        return(o1);
    else
        return(o2);
}
Fixed &Fixed :: max_Fixed(Fixed &o1,Fixed &o2){
    if(o1 > o2)
        return(o1);
    else
        return(o2);
}



