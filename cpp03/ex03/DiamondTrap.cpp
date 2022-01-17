/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 15:57:47 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/17 20:47:05 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "A nameless DiamondTrap has been created." << std::endl;
	FragTrap::setHp();
	ScavTrap::setSp();
	FragTrap::setDmg();
}

void	DiamondTrap::setName(std::string name)
{
	this->_name = name;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	this->ClapTrap::setName(name + "_clap_name");
	FragTrap::setHp();
	ScavTrap::setSp();
	FragTrap::setDmg();
	std::cout << "DiamondTrap " << _name << " ClapTrap name: " << ClapTrap::getName() << " has been created." << std::endl;

}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " ClapTrap name: " << ClapTrap::getName() << " has been destroyed." << std::endl;
}

void	attack(std::string const &target)
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