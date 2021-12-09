/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/14 23:33:30 by nhariman      #+#    #+#                 */
/*   Updated: 2021/12/09 22:25:49 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <cstdio>

// https://www.embeddedrelated.com/showarticle/1015.php
// on why rounding is fine and bitshifting

// https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
// fixed point conversion in c, can be translated to cpp

Fixed::Fixed()
{
	this->_fpv = 0;
}

Fixed::Fixed(int const nb)
{
	this->_fpv = roundf(nb * (1 << this->_fb));
}

Fixed::Fixed(float const nb)
{
	this->_fpv = roundf(nb * (1 <<this->_fb));
}

Fixed::~Fixed()
{}

Fixed::Fixed(Fixed const &nb) : _fpv(nb._fpv)
{}

Fixed& 	Fixed::operator= (Fixed const &fixed)
{
	this->_fpv = fixed._fpv;
	return (*this);
}

std::ostream& operator<< (std::ostream &out, Fixed const& fixed)
{
	return out << fixed.toFloat();	
}

int		Fixed::getRawBits(void) const
{
	return this->_fpv;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fpv = raw;
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

Fixed	Fixed::operator+ (const Fixed &fixed) const
{
	Fixed	fix;
	fix._fpv = _fpv + fixed._fpv;
	return fix;
}

Fixed	Fixed::operator- (const Fixed &fixed) const
{
	Fixed	fix;
	fix._fpv = _fpv - fixed._fpv;
	return fix;
}

// multiplication with fixed point numbers:
// multiply into larger sized variable, then rightshift by the number of bits of fixed point precision.
Fixed	Fixed::operator* (const Fixed &fixed) const
{
	Fixed	fix;
	fix._fpv = (_fpv * fixed._fpv) / (1 << _fb);
	return fix;
}

Fixed	Fixed::operator/ (const Fixed &fixed) const
{
	Fixed	fix;
	fix._fpv = (_fpv / fixed._fpv) * (1 << _fb);
	return fix;
}

// https://en.cppreference.com/w/cpp/language/operator_comparison

// OVERLOAD INSIDE CLASS

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

//pre-increment
Fixed&	Fixed::operator++ ()
{
	++this->_fpv;
	return *this;
}

//with post-increment you have to make a tmp to store the original value
Fixed	Fixed::operator++ (int)
{
	Fixed	tmp;

	tmp._fpv = this->_fpv;
	this->_fpv++;
	return tmp;
}

// pre-increment
Fixed&	Fixed::operator-- ()
{
	--this->_fpv;
	return *this;
}

//with post-increment you have to make a tmp to store the original value
Fixed	Fixed::operator-- (int)
{
	Fixed	tmp;

	tmp._fpv = this->_fpv;
	this->_fpv--;
	return tmp;
}
