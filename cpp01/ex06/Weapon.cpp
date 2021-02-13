/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/13 22:50:25 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/13 23:33:53 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(std::string type) : _type(type)
{}

Weapon::~Weapon()
{}

// returns the ADDRESS of the weapon type as a const string, the address of this->_type
const	std::string		&Weapon::getType()
{
	return this->_type;
}

void					Weapon::setType(std::string type)
{
	this->_type = type;
}