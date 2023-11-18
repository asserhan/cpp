#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>

class Fixed{
    private:
        int fixed_raw;
        static const int fract;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &oobj);
        Fixed &operator=(const Fixed &oobj);
        int getRawBits( void) const;
        void setRawBits( int const raw);
    

};
#endif