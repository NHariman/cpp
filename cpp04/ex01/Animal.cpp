/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:31:48 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/23 21:16:25 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << B_PURPLE << "An animal of unknown type has been created." << B_END << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << B_PURPLE << "An animal of type: " << type << " has been created." << B_END << std::endl;
}

Animal::Animal(const Animal& obj) : _type(obj.getType())
{
	*this = obj;
	std::cout << B_PURPLE << "Copy constructor of Animal has been called" << B_END << std::endl;
}

Animal&		Animal::operator=(const Animal& obj)
{
	this->_type = obj.getType();
	std::cout << B_PURPLE << "Animal's assignment operator has been called" << B_END << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << B_PURPLEB <<  "Animal: " << this->_type << " has died." << B_END << std::endl;
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

Brain*	Animal::getBrain() const
{
	std::cerr << "No brain detected :\\" << std::endl;
	return NULL;
}
