/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 19:15:15 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/12 19:37:06 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{}

Zombie::~Zombie()
{
	std::cout << this->_name << " has been slain.\n";
}

void		Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braaaainnnsss...\n";
}

std::string	Zombie::get_name(void)
{
	return this->_name;
}

void		Zombie::Make_Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}