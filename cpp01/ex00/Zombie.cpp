/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 13:56:59 by nhariman      #+#    #+#                 */
/*   Updated: 2021/12/08 21:19:40 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name) : _name(name)
{}

Zombie::~Zombie()
{
	std::cout << this->_name << " has been slain.\n";
}

void		Zombie::announce(void)
{
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ...\n";
}
