/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/14 23:33:30 by nhariman      #+#    #+#                 */
/*   Updated: 2021/12/07 22:18:27 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// https://www.embeddedrelated.com/showarticle/1015.php
// on why rounding is fine and bitshifting

// https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
// fixed point conversion in c, can be translated to cpp

Fixed::Fixed()
{
	std::cout << "Default Constructor called" << std::endl;
	this->_fpv = 0;
}

Fixed::Fixed(int const nb)
{
	std::cout << "int constructor called" << std::endl;
	this->_fpv = roundf(nb * (1 << this->_fb));
}

Fixed::Fixed(float const nb)
{
	std::cout << "float constructor called" << std::endl;
	this->_fpv = roundf(nb * (1 <<this->_fb));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &nb) : _fpv(nb._fpv)
{
	std::cout << "copy constructor called" << std::endl;
}

Fixed& 	Fixed::operator= (Fixed const &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fpv = fixed._fpv;
	return (*this);
}

std::ostream& operator<< (std::ostream &out, Fixed const& fixed)
{
	return out << fixed.toFloat();	
}

int		Fixed::getRawBits(void) const
{
	std::cout << "GetRawBits member function called" << std::endl;
	return this->_fpv;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "SetRawBits member function called" << std::endl;
	this->_fpv = raw;
	std::cout << "RawBits have been set to:" << this->_fpv << std::endl;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fpv / (float)(1 << this->_fb));
}

int		Fixed::toInt(void) const
{
	return (this->_fpv / (int)(1 << this->_fb));
}

// https://en.cppreference.com/w/cpp/language/operator_arithmetic

Fixed::Fixed	Fixed::operator+ (const Fixed &fixed) const
{
	Fixed	fix;
	fix._fpv = _fpv + fixed._fpv;
	return fix;
}

Fixed::Fixed	Fixed::operator- (const Fixed &fixed) const
{
	Fixed	fix;
	fix._fpv = _fpv - fixed._fpv;
	return fix;
}

Fixed::Fixed	Fixed::operator* (const Fixed &fixed) const
{
	Fixed	fix;
	fix._fpv = _fpv * fixed._fpv;
	return fix;
}

Fixed::Fixed	Fixed::operator/ (const Fixed &fixed) const
{
	Fixed	fix;
	fix._fpv = _fpv / fixed._fpv;
	return fix;
}

// https://en.cppreference.com/w/cpp/language/operator_comparison

bool	Fixed::operator> (Fixed &fixed) const
{
	if (_fpv > fixed._fpv)
		return (true);
	return (false);
}

bool	Fixed::operator< (Fixed &fixed) const
{
	if (_fpv < fixed._fpv)
		return (true);
	return (false);
}

bool	Fixed::operator>= (Fixed &fixed) const
{
	if (_fpv >= fixed._fpv)
		return (true);
	return (false);
}

bool	Fixed::operator<=	(Fixed &fixed) const
{
	if (_fpv <= fixed._fpv)
		return (true);
	return (false);
}

bool	Fixed::operator== (Fixed &fixed) const
{
	if (_fpv == fixed._fpv)
		return (true);
	return (false);
}

bool	Fixed::operator!= (Fixed &fixed) const
{
	if (_fpv != fixed._fpv)
		return (true);
	return (false);
}

// increment operators https://en.cppreference.com/w/cpp/language/operator_incdec

Fixed&	Fixed::operator++ ()
{
	++this->_fpv;
}

Fixed	Fixed::operator++ (int);
{
	this->_fpv++;
}

Fixed&	Fixed::operator-- ();
{
	--this->_fpv;
}
Fixed	Fixed::operator-- (int);
{
	this->_fpv--;
}

static	Fixed&	Fixed::min(const Fixed& val1, const Fixed& val2)
{
	if (val1._fpv > val2._fpv)
		return (val2);
	return (val1);
}

static	Fixed&	Fixed::max(const Fixed& val1, const Fixed& val2);
{
	if (val1._fpv < val2._fpv)
		return (val2);
	return (val1);
}
