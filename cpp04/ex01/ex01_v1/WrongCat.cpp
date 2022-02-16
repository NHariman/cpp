/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 17:04:02 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/19 17:12:10 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "A Wrongcat has been created" << std::endl;
	WrongAnimal::setType("WrongCat");
	this->_sound = "moo";
}

WrongCat::~WrongCat()
{
	std::cout << "A Wrongcat has died" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << this->getSound() << std::endl;
}

std::string	WrongCat::getSound() const
{
	return this->_sound;
}

void		WrongCat::setSound(std::string sound)
{
	this->_sound = sound;
}