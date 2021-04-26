/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/14 23:33:30 by nhariman      #+#    #+#                 */
/*   Updated: 2021/04/26 19:54:31 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

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