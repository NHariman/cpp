/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: niks <niks@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:04:50 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/08 19:18:14 by nhariman      ########   odam.nl         */
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

Dog& Dog::operator= (Dog const &dog)
{
	std::cout << "Dog Copy constructor called." << std::endl;
	this->_brain = dog._brain;
	return (*this);
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


std::string	Dog::getIdeas(int nb)
{
	if (nb < 0 || nb >= 100)
		return "";
	return this->_brain->ideas[nb];
}

void		Dog::setIdeas(int nb, std::string content)
{
		if (nb < 0 || nb >= 100)
			std::cout << "Out of Bounds\n";
		this->_brain->ideas[nb] = content;
}