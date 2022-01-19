/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:04:50 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/19 16:01:51 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "A Dog has been created" << std::endl;
	Animal::setType("Dog");
	this->_sound = "woof";
}

Dog::~Dog()
{
	std::cout << "A Dog has died" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << this->_sound << std::endl;
}

std::string	Dog::getSound() const
{
	return this->_sound;
}

void		Dog::setSound(std::string sound)
{
	this->_sound = sound;
}