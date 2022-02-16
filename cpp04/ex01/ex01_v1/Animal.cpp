/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:31:48 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/11 18:14:44 by nhariman      ########   odam.nl         */
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
	std::cout << "An Animal has died." << std::endl;
}

Animal::Animal(const Animal& obj)
{
	*this = obj;
	std::cout << "Animal has been copied over" << std::endl;
}

Animal&	Animal::operator=(Animal const &obj)
{
	_type = obj.getType();
	return (*this);
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
