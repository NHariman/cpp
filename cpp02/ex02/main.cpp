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

	std::cout << "====== The main from the subject ======" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << "\n\n\n" << std::endl;
	// everything else
	std::cout << "====== Everything Else ======" << std::endl;

	std::cout << "d(10) * e(20): " << d * e << std::endl;
	std::cout << "d(10) + e(20): " << d + e << std::endl;
	std::cout << "d(10) - e(20): " << d - e << std::endl;
	std::cout << "e(20) / d(10): " << e / d << std::endl;
	std::cout << std::endl;
	
	std::cout << "====== min() ======" << std::endl;
	std::cout << "min(const b(10.1016), const c(3)): " << Fixed::min(b, c) << std::endl;
	std::cout << "min(d(10), e(20)): " << Fixed::min(d, e) << std::endl;
	std::cout << std::endl;
	
	std::cout << "====== max() ======" << std::endl;
	std::cout << "min(const b(10.1016), const c(3)): " << Fixed::max(b, c) << std::endl;
	std::cout << "max(d(10), e(20)): " << Fixed::max(d, e) << std::endl;
	std::cout << std::endl;

	std::cout << "======Incrementing ++ ======" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << std::endl;

	std::cout << "======Decrementing -- ======" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "--a: " << --a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << std::endl;

	std::cout << "==Fixed const	b( Fixed(5.05f) * Fixed(2));==" << std::endl;
	std::cout << b << std::endl;
	std::cout << std::endl;

	std::cout << "==Fixed const c (Fixed(6.06f) / Fixed(2));==" << std::endl;
	std::cout << c << std::endl;
	std::cout << std::endl;

	std::cout << "======max(a, b)======" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << std::endl;

	std::cout << "======min(a, b)======" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << std::endl;

	std::cout << "====== operator > ======" << std::endl;
	std::cout << "large num > small num, should output true" << std::endl;
	if (e > d) // 20 > 10
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	std::cout << "small num > large num, should output false" << std::endl;
	if (d > e) // 10 > 20
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	std::cout << "same number on both sides, should output false" << std::endl;
	if (d > f) // 10 > 10
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
	std::cout << std::endl;

	std::cout << "====== operator >= ======" << std::endl;
	std::cout << "large num > small num, should output true" << std::endl;
	if (e >= d) // 20 >= 10
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	std::cout << "small num > large num, should output false" << std::endl;
	if (d >= e) // 10 >= 20
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	std::cout << "same number on both sides, should output true" << std::endl;
	if (d >= f) // 10 >= 10
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
	std::cout << std::endl;

	std::cout << "====== operator < ======" << std::endl;
	std::cout << "large num < small num, should output false" << std::endl;
	if (e < d) // 20 < 10
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	std::cout << "small num < large num, should output true" << std::endl;
	if (d < e) // 10 < 20
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	std::cout << "same number on both sides, should output false" << std::endl;
	if (d < f) // 10 < 10
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
	std::cout << std::endl;

	std::cout << "====== operator <= ======" << std::endl;
	std::cout << "large num <= small num, should output false" << std::endl;
	if (e <= d) // 20 <= 10
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	std::cout << "small num <= large num, should output true" << std::endl;
	if (d <= e) // 10 <= 20
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	std::cout << "same number on both sides, should output true" << std::endl;
	if (d <= f) // 10 <= 10
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
	std::cout << std::endl;

	std::cout << "====== operator == ======" << std::endl;
	std::cout << "large num == small num, should output false" << std::endl;
	if (e == d) // 20 == 10
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	std::cout << "small num == large num, should output false" << std::endl;
	if (d == e) // 10 == 20
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	std::cout << "same number on both sides, should output true" << std::endl;
	if (d == f) // 10 == 10
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
	std::cout << std::endl;

	std::cout << "====== operator != ======" << std::endl;
	std::cout << "large num != small num, should output true" << std::endl;
	if (e != d) // 20 != 10
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	std::cout << "small num != large num, should output true" << std::endl;
	if (d != e) // 10 != 20
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	std::cout << "same number on both sides, should output false" << std::endl;
	if (d != f) // 10 != 10
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
	return 0;
}