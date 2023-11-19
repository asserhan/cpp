#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>

class Fixed{
    private:
        int fixed_raw;
        static const int fract = 8;
    public:
        //Default constructor
        Fixed();
        //copy constructor
        Fixed(const Fixed &oobj);
        //Parametrised constructor(int constructor)
        Fixed(const int digit);
        //Parametrised constructor(Float constructor)
        Fixed(const float digit);
        //Destructor
        ~Fixed();
        //Copy assignement operator
        Fixed &operator=(const Fixed &oobj);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt( void )const;
        bool operator>(const Fixed &obj)const;
        bool operator<(const Fixed &obj)const;
        bool operator<=(const Fixed &obj)const;
        bool operator>=(const Fixed &obj)const;
        bool operator==(const Fixed &obj)const;
        bool operator!=(const Fixed &obj)const;
        Fixed operator+(const Fixed &obj)const;
        Fixed operator-(const Fixed &obj)const;
        Fixed operator*(const Fixed &obj)const;
        Fixed operator/(const Fixed &obj)const;
        //pre increment
        Fixed &operator++();
        //post increment 
        Fixed operator++(int);
        //pre decrement
        Fixed &operator--();
        //post decrement 
        Fixed operator--(int);
        static const Fixed &min_Cfixed(const Fixed&o1,const Fixed &o2);
        static Fixed &min_Fixed(Fixed &o1,Fixed &o2);
        static const Fixed &max_Cfixed(const Fixed&o1,const Fixed &o2);
        static Fixed &max_Fixed(Fixed &o1,Fixed &o2);
    
        

    

};
std :: ostream &operator<<(std :: ostream &os,const Fixed &oobj);
#endif