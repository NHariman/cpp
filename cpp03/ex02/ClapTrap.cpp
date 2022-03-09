/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/16 19:58:36 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/09 20:44:12 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "A nameless ClapTrap has been created." << std::endl;
	this->_ogHp = 10;
	this->_ogEp = 10;
	this->_hp = 10;
	this->_ep = 10;
	this->_atk = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "ClapTrap " << _name << " has been created." << std::endl;
	this->_ogHp = 10;
	this->_ogEp = 10;
	this->_hp = 10;
	this->_ep = 10;
	this->_atk = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->getName() << " has been destroyed." << std::endl;
}

void		ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void		ClapTrap::setOgHp(unsigned int hp)
{
	this->_ogHp = hp;
}

void		ClapTrap::setOgEp(unsigned int ep)
{
	this->_ogEp = ep;
}

void		ClapTrap::setHp(unsigned int hp)
{
	this->_hp = hp;
}

void		ClapTrap::setEp(unsigned int ep)
{
	this->_ep = ep;
}

void		ClapTrap::setAtk(unsigned int atk)
{
	this->_atk = atk;
}

std::string	ClapTrap::getName()
{
	return this->_name;
}

unsigned int	ClapTrap::getOgHp()
{
	return this->_ogHp;
}

unsigned int	ClapTrap::getOgEp()
{
	return this->_ogEp;
}

unsigned int	ClapTrap::getHp()
{
	return this->_hp;
}

unsigned int	ClapTrap::getEp()
{
	return this->_ep;
}

unsigned int	ClapTrap::getAtk()
{
	return this->_atk;
}

void		ClapTrap::getStats(void)
{
	std::cout << this->_name << " has:" << std::endl;
	std::cout << "HP: " << this->_hp << std::endl;
	std::cout << "EP: " << this->_ep << std::endl;
	std::cout << "Atk: " << this->_atk << std::endl;
}

void		ClapTrap::attack(std::string const &target)
{
	if (this->_hp == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is too dead to attack right now." << std::endl;
		return ;
	}
	if (this->_ep < 1)
	{
		std::cout << "ClapTrap " << this->_name << " does not have enough energy points to attack." << std::endl;
		return ;
	}
	this->_ep--;
	std::cout << "ClapTrap " << this->_name << " attacked " << target << ", causing " << this->_atk << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name;
	if (this->_hp == 0)
	{
		std::cout << " is already dead, stop beating a dead horse!" << std::endl;
		return ;
	}
	std::cout << " has taken ";
	if (this->_hp > amount)
	{
		std::cout << amount;
		this->_hp = this->_hp - amount;
	}
	else
	{
		std::cout << " " << this->_hp;
		this->_hp = 0;
	}
	std::cout << " damage!" << std::endl;
	return ;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep < 1)
	{
		std::cout << "ClapTrap " << this->_name << " does not have enough energy points to repair itself." << std::endl;
		return ;
	}
	this->_ep--;
	std::cout << "ClapTrap " << this->_name;
	if (this->_hp == 0)
	{
		std::cout << " is irreparably broken, no hp recovered!" << std::endl;
		return ;
	}
	std::cout << " has recovered ";
	if (this->_hp + amount < this->_ogHp)
	{
		std::cout << amount;
		this->_hp = this->_hp + amount;	
	}
	else
	{
		std::cout << "all of their";
		this->_hp = this->_ogHp;
	}
	std::cout << " hp!" << std::endl;
	return ;
}
