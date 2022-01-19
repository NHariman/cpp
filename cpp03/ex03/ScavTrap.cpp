/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 11:58:55 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/19 12:21:11 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "A nameless ScavTrap has been created." << std::endl;
	this->setHp(100);
	this->setEp(50);
	this->setDmg(20);
}

ScavTrap::ScavTrap(std::string name)
{
	this->setName(name);
	this->setHp(100);
	this->setEp(50);
	this->setDmg(20);
	std::cout << "ScavTrap " << this->getName() << " has been created." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " has been destroyed." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " has entered Gate Keeper Mode, whatever that means." << std::endl;
}