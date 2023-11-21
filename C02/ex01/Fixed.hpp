#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed
{
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
	int toInt(void) const;
};
std ::ostream &operator<<(std ::ostream &os, const Fixed &oobj);
#endif