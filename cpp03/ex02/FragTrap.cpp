/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 15:25:47 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/17 15:31:11 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->setHp(100);
	this->setEp(100);
	this->setDmg(30);
}

FragTrap::FragTrap(std::string name)
{
	this->setName(name);
	std::cout << "FragTrap " << this->getName() << " has been created." << std::endl;
	this->setHp(100);
	this->setEp(100);
	this->setDmg(30);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " has been destroyed." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << " requests the highest of fives." << std::endl;
}