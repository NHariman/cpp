/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 21:37:16 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/08 21:41:42 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string _type;
	public:
	ZombieEvent();
	~ZombieEvent();
	std::string& setZombieType(std::string type);
	Zombie *newZombie(std::string name);
	Zombie randomChump();
};

#endif
