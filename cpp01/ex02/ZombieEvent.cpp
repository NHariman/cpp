/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 21:36:47 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/08 22:28:58 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{}

ZombieEvent::~ZombieEvent()
{}

std::string&	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
	return (this->_type);
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, this->_type);
	return(zombie);
}

Zombie		ZombieEvent::randomChump()
{
	std::string names[6] = {"Charles", "Chuck", "Arnoud", "Thaly", "Sophie", "Henrie"};
	std::string types[6] = {"Cursed", "Rotten", "Fresh", "Funky", "Hungry", "friendly"};
	Zombie zombie = Zombie(names[rand() % 5], types[rand() % 5]);
	zombie.announce();
	return (zombie);
}