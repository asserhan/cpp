#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2)); // constru
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max_Cfixed(a, b) << std::endl;

	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << b / a << std::endl;
	std::cout << a * b << std::endl;
	std::cout << Fixed::min_Cfixed(a, b) << std::endl;

	return (0);
}