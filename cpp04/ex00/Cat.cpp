/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:04:36 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/19 15:45:57 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "A cat has been created" << std::endl;
	Animal::setType("Cat");
	this->_sound = "meow";
}

Cat::~Cat()
{
	std::cout << "A cat has died" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << this->getSound() << std::endl;
}

std::string	Cat::getSound() const
{
	return this->_sound;
}

void		Cat::setSound(std::string sound)
{
	this->_sound = sound;
}
