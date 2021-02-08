/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 19:15:15 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/08 21:57:00 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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