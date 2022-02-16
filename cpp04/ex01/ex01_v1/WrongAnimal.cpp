/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:06:09 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/19 17:11:45 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal()
{
	std::cout << "A Wronganimal of unknown type has been created." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "A Wronganimal of type: " << type << " has been created." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Animal: " << this->_type << " has died." << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "??????" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->_type;
}

void		WrongAnimal::setType(std::string type)
{
	this->_type = type;
}
