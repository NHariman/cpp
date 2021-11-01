/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 22:37:42 by nhariman      #+#    #+#                 */
/*   Updated: 2021/11/01 18:14:32 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		Zombie::zombieHorde(int n, std::string name)
{
	Zombie	*horde = NULL;
	std::string names[6] = {"Charles", "Chuck", "Arnoud", "Thaly", "Sophie", "Henrie"};
	int i = 0;
	horde = new Zombie[n];
	while (i < n)
	{
		if (i == 0)
			horde[i]._name = name;
		else
			horde[i]._name = names[rand() % 5];
		i++;
	}
	return (horde);
}
