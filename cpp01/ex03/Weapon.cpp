/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 18:39:38 by nhariman      #+#    #+#                 */
/*   Updated: 2021/11/01 21:50:32 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(std::string type) : _type(type)
{}

Weapon::~Weapon()
{}

const std::string&	Weapon::getType()
{
	return this->_type;
}
void				Weapon::setType(const std::string type)
{
	this->_type = type;
}
