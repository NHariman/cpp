/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:04:50 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/19 19:08:13 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "A Dog has been created" << std::endl;
	Animal::setType("Dog");
	this->_sound = "woof";
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "A Dog has died" << std::endl;
	delete this->_brain;
}

Dog::Dog(Dog& obj)
{
	_sound = obj.getSound();
	_brain = new Brain(*obj.getBrain());
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

Brain*		Dog::getBrain()
{
	return this->_brain;
}