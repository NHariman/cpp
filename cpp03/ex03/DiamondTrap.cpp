/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 15:57:47 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/13 15:30:24 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	FragTrap frag = FragTrap("tmp");
	ScavTrap scav = ScavTrap("tmp");;
	std::cout << "A nameless DiamondTrap has been created." << std::endl;
	FragTrap::setOgHp(frag.getOgHp());
	ScavTrap::setOgEp(scav.getOgEp());
	FragTrap::setHp(frag.getHp());
	ScavTrap::setEp(scav.getEp());
	FragTrap::setAtk(frag.getAtk());
}

void	DiamondTrap::setName(std::string name)
{
	this->_name = name;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	FragTrap frag = FragTrap("tmp");
	ScavTrap scav = ScavTrap("tmp");;
	ClapTrap::setName(name + "_clap_name");
	FragTrap::setOgHp(frag.getOgHp());
	ScavTrap::setOgEp(scav.getOgEp());
	FragTrap::setHp(frag.getHp());
	ScavTrap::setEp(scav.getEp());
	FragTrap::setAtk(frag.getAtk());
	std::cout << "DiamondTrap " << _name << " ClapTrap name: " << ClapTrap::getName() << " has been created." << std::endl;

}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " ClapTrap name: " << ClapTrap::getName() << " has been destroyed." << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->getName() << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::getName() << std::endl;
}

std::string	DiamondTrap::getName()
{
	return this->_name;
}