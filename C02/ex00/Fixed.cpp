#include "Fixed.hpp"

Fixed ::Fixed()
{
	this->fixed_raw = 0;
	std ::cout << "Default constructor called" << std ::endl;
}
Fixed ::~Fixed()
{
	std ::cout << "Destructor called" << std ::endl;
}
Fixed ::Fixed(const Fixed &oobj)
{
	std ::cout << "Copy constructor called" << std ::endl;
	(*this) = oobj;
}
Fixed &Fixed ::operator=(const Fixed &oobj)
{
	std ::cout << "Copy assignment operator called" << std ::endl;
	this->fixed_raw = oobj.getRawBits();
	return (*this);
}
int Fixed ::getRawBits(void) const
{
	std ::cout << "getRawBits member function called" << std ::endl;
	return (this->fixed_raw);
}
void Fixed ::setRawBits(int const raw)
{
	fixed_raw = raw;
}
