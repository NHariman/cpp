/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/14 23:33:30 by nhariman      #+#    #+#                 */
/*   Updated: 2021/12/01 15:06:50 by nhariman      ########   odam.nl         */
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

Fixed::Fixed	Fixed::operator+ (Fixed &fixed) const
{
	Fixed	fix;
	fix._fpv = this->_fpv + fixed._fpv;
	return fix;
}

Fixed::Fixed	Fixed::operator- (Fixed &fixed) const
{
	Fixed	fix;
	fix._fpv = this->_fpv - fixed._fpv;
	return fix;
}

Fixed::Fixed	Fixed::operator* (Fixed &fixed) const
{
	Fixed	fix;
	fix._fpv = this->_fpv * fixed._fpv;
	return fix;
}

Fixed::Fixed	Fixed::operator/ (Fixed &fixed) const
{
	Fixed	fix;
	fix._fpv = this->_fpv / fixed._fpv;
	return fix;
}

bool	Fixed::operator> (Fixed &fixed) const
{

}

bool	Fixed::operator< (Fixed &fixed) const
{

}

bool	Fixed::operator>= (Fixed &fixed) const
{

}

bool	Fixed::operator<=	(Fixed &fixed) const
{

}

bool	Fixed::operator== (Fixed &fixed) const
{

}

bool	Fixed::operator!= (Fixed &fixed) const
{

}
