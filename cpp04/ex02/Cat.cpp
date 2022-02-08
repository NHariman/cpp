/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: niks <niks@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:04:36 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/08 18:55:50 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "A cat has been created" << std::endl;
	Animal::setType("Cat");
	this->_sound = "meow";
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "A cat has died" << std::endl;
	delete this->_brain;
}


Cat::Cat(Cat& obj)
{
	_sound = obj.getSound();
	_brain = new Brain(*obj.getBrain());
}

Cat& Cat::operator= (Cat const &cat)
{
	std::cout << "Cat Copy constructor called." << std::endl;
	this->_brain = cat._brain;
	return (*this);
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

Brain*		Cat::getBrain()
{
	return this->_brain;
}

std::string	Cat::getIdeas(int nb)
{
	if (nb < 0 || nb >= 100)
		return "";
	return this->_brain->ideas[nb];
}

void		Cat::setIdeas(int nb, std::string content)
{
		if (nb < 0 || nb >= 100)
			std::cout << "Out of Bounds\n";
		this->_brain->ideas[nb] = content;
}
