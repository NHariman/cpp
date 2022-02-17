/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:04:36 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/17 16:08:44 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << B_GREEN << "A cat has been created" << B_END << std::endl;
	Animal::setType("Cat");
	this->_sound = "meow";
	this->_brain = new Brain();
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << B_GREENB << "A cat has died" << B_END << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj.getType()), _sound(obj.getSound()), _brain(new Brain(*obj.getBrain()))
{
	*this = obj;
	std::cout << B_GREEN << "CAT COPY CONSTRUCTOR" << B_END << std::endl;
}

Cat&	Cat::operator=(const Cat& obj)
{
	this->_type = obj.getType();
	this->_sound = obj.getSound();
	std::cout << B_GREEN << "CAT ASSIGNATION OVERLOAD" << B_END << std::endl;
	return (*this);
}

void	Cat::makeSound()
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

Brain*		Cat::getBrain() const
{
	return this->_brain;
}
