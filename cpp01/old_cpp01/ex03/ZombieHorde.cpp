/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 22:37:42 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/12 12:08:33 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"



ZombieHorde::ZombieHorde(int n)
{
	std::string names[6] = {"Charles", "Chuck", "Arnoud", "Thaly", "Sophie", "Henrie"};
	std::string types[6] = {"Cursed", "Rotten", "Fresh", "Funky", "Hungry", "friendly"};
	int i = 0;
	_zombies = new Zombie[n];
	_hordesize = n;
	while (i < n)
	{
		_zombies[i].Make_Zombie(names[rand() % 5], types[rand() % 5]);
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_zombies;
	std::cout << "the hoard has been slain.\n";
	std::cout << this->_hordesize << " zombies were slain.\n";
}

void		ZombieHorde::announce()
{
	int i = 0;
	std::cout << "Sound off!!\n\n";
	while (i < this->_hordesize)
	{
		this->_zombies[i].announce();
		std::cout << std::endl;
		i++;
	}
}

int			ZombieHorde::get_hordesize()
{
	return this->_hordesize;
}