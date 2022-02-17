/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:04:50 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/17 16:08:54 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << B_BLUE << "A Dog has been created" << B_END << std::endl;
	Animal::setType("Dog");
	this->_sound = "woof";
	this->_brain = new Brain();
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << B_BLUEB << "A Dog has died" << B_END << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj.getType()), _sound(obj.getSound()), _brain(new Brain(*obj.getBrain()))
{
	*this = obj;
	std::cout << B_BLUE << "DOG COPY CONSTRUCTOR" << B_END << std::endl;
}

Dog&	Dog::operator=(const Dog& obj)
{
	this->_type = obj.getType();
	this->_sound = obj.getSound();
	std::cout << B_BLUE << "DOG ASSIGNATION OVERLOAD" << B_END << std::endl;
	return *this;
}

Brain*	Dog::getBrain() const
{
	return this->_brain;
}

void	Dog::makeSound()
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
