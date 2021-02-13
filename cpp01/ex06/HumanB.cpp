/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/13 23:43:51 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/13 23:49:41 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{}

HumanB::~HumanB()
{}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

// because this->_weapon contains a pointer to the address, getType() is called to dereference
// the weapon's address into a type that can be read
void		HumanB::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}