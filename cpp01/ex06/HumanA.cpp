/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/13 22:59:12 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/13 23:37:40 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{}

HumanA::~HumanA()
{}

// because this->_weapon contains a pointer to the address, getType() is called to dereference
// the weapon's address into a type that can be read
void		HumanA::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}