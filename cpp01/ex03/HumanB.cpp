/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 19:06:31 by nhariman      #+#    #+#                 */
/*   Updated: 2021/12/08 21:35:19 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = new Weapon();
}

HumanB::~HumanB(void)
{}

void	HumanB::setWeapon(Weapon &set_weapon)
{
	delete this->_weapon;
	this->_weapon = &set_weapon;
}

void	HumanB::attack(void) const
{
	if (this->_weapon->getType().empty())
		std::cout << this->_name << " is completely defenseless!" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
