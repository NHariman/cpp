/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:31:48 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/19 16:56:42 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::~AAnimal()
{
	std::cout << "Animal: " << this->_type << " has died." << std::endl;
}

std::string	AAnimal::getType() const
{
	return this->_type;
}

void		AAnimal::setType(std::string type)
{
	this->_type = type;
}
