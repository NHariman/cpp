/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: niks <niks@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:04:50 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/09 17:51:22 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "A Dog has been created" << std::endl;
	Animal::setType("Dog");
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "A Dog has died" << std::endl;
	delete _brain;
}

Dog::Dog(Dog& obj)
{
	*this = obj;
}

Dog& Dog::operator= (Dog const &dog)
{
	std::cout << "Dog Copy constructor called." << std::endl;
	_brain = new Brain();
	*_brain = *dog.getBrain();
	_type = dog.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "woof" << std::endl;
}

Brain*		Dog::getBrain() const
{
	return this->_brain;
}


std::string	Dog::getIdeas(int nb) const
{
	if (nb < 0 || nb >= 100)
		return "";
	return this->_brain->ideas[nb];
}

void		Dog::setIdeas(int nb, std::string content) const
{
		if (nb < 0 || nb >= 100)
			std::cout << "Out of Bounds\n";
		this->_brain->ideas[nb] = content;
}