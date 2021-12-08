/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 22:37:42 by nhariman      #+#    #+#                 */
/*   Updated: 2021/12/08 21:25:51 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		zombieHorde(int n, std::string name)
{
	Zombie	*horde;
	horde = new Zombie[n];
	std::string names[6] = {"Charles", "Chuck", "Arnoud", "Thaly", "Sophie", "Henrie"};
	int i = 0;
	while (i < n)
	{
		if (i == 0)
			horde[i].setName(name);
		else
			horde[i].setName(names[rand() % 5]);
		i++;
	}
	return (horde);
}
