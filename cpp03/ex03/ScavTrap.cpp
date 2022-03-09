/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 11:58:55 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/09 20:43:48 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->setHp(100);
	this->setOgHp(100);
	this->setEp(50);
	this->setOgEp(50);
	this->setAtk(20);
}

ScavTrap::ScavTrap(std::string name)
{
	this->setName(name);
	this->setHp(100);
	this->setOgHp(100);
	this->setEp(50);
	this->setOgEp(50);
	this->setAtk(20);
	std::cout << "ScavTrap " << this->getName() << " has been created." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " has been destroyed." << std::endl;
}

void		ScavTrap::attack(std::string const &target)
{
	if (this->getHp() == 0)
	{
		std::cout << "ScavTrap " << this->getName() << " is too dead to attack right now." << std::endl;
		return ;
	}
	if (this->getEp() < 1)
	{
		std::cout << "ScavTrap " << this->getName() << " does not have enough energy points to attack." << std::endl;
		return ;
	}
	this->setEp(this->getEp() - 1);
	std::cout << "ScavTrap " << this->getName() << " attacked " << target << ", causing " << this->getAtk() << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " has entered Gate Keeper Mode, whatever that means." << std::endl;
}