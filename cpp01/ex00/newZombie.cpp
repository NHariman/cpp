/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 14:19:59 by nhariman      #+#    #+#                 */
/*   Updated: 2021/11/01 15:27:21 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		Zombie::newZombie(std::string name)
{
	Zombie	*Zomblet = new Zombie(); // use new to allocate memory for a new zombie
	Zomblet->_name = name; // name it
	return (Zomblet); // use it elsewhere
}
