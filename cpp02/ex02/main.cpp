#include "Fixed.hpp"
#include <iostream>

int		main(void)
{
	Fixed	a;
	Fixed const	b( Fixed(5.05f) * Fixed(2));
	Fixed const c (Fixed(6.06f) / Fixed(2));
	Fixed d(10);
	Fixed e(20);
	Fixed f = d;
	Fixed g = e;


	std::cout << "======Incrementing======" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << "======Decrementing======" << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << "==Fixed const	b( Fixed(5.05f) * Fixed(2));==" << std::endl;
	std::cout << b << std::endl;
	std::cout << "==Fixed const c (Fixed(6.06f) / Fixed(2));==" << std::endl;
	std::cout << c << std::endl;

	std::cout << "======max()======" << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "======min()======" << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	std::cout << "====== operator > ======" << std::endl;
	std::cout << "large num > small num, should output true" << std::endl;
	if (e > d)
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	std::cout << "small num > large num, should output false" << std::endl;
	if (d > e)
fs	else
		std::cout << "FALSE" << std::endl;

	std::cout << "same number on both sides, should output false" << std::endl;
	if (d > f)
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	std::cout << "====== operator >= ======" << std::endl;
	if (e >= g)
		std::cout << e << " is larger than or equal to " << 20 << std::endl;
	else
		std::cout << e << " is NOT larger than or equal to " << 20 << std::endl;
	

	// Fixed a;
	// Fixed const b(10);
	// Fixed const c(42.42f);
	// Fixed const d(b);

	// a = Fixed(1234.4321f);

	// std::cout << "a is " << a << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;

	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}
