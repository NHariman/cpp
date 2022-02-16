/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: niks <niks@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:04:36 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/11 20:55:35 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "A cat has been created" << std::endl;
	Animal::setType("Cat");
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "A cat has died" << std::endl;
	delete _brain;
}


Cat::Cat(const Cat& obj)
{
	*this = obj;
	Animal::setType(obj.getType());
}

Cat& Cat::operator= (Cat const &obj)
{
	std::cout << "Cat Copy constructor called." << std::endl;
	Animal::setType(obj.getType());
	_brain = new Brain(*obj.getBrain());
	// for (int i = 0; i < 100; i++)
	// 	_brain->ideas[i] = obj.getBrain()->ideas[i];
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}

Brain*		Cat::getBrain() const
{
	return this->_brain;
}

std::string	Cat::getIdeas(int nb) const
{
	if (nb < 0 || nb >= 100)
		return "";
	return this->_brain->ideas[nb];
}

void		Cat::setIdeas(int nb, std::string content) const
{
		if (nb < 0 || nb >= 100)
			std::cout << "Out of Bounds\n";
		this->_brain->ideas[nb] = content;
}
