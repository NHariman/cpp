/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:31:48 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/09 19:24:25 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "An animal of unknown type has been created." << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "An animal of type: " << type << " has been created." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal: " << this->_type << " has died." << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "??????" << std::endl;
}

std::string	Animal::getType() const
{
	return this->_type;
}

void		Animal::setType(std::string type)
{
	this->_type = type;
}
