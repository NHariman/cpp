/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/14 23:33:30 by nhariman      #+#    #+#                 */
/*   Updated: 2021/04/26 15:33:55 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default Constructor called" << std::endl;
	this->_fpv = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &nb) : _fpv(nb._fpv)
{
	std::cout << "copy constructor called" << std::endl;
}

Fixed& 	Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fpv = fixed.getRawBits();
	return (*this);
	
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