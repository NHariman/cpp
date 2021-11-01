/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 14:20:26 by nhariman      #+#    #+#                 */
/*   Updated: 2021/11/01 16:24:03 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie	*joinks = NULL; // this instantiates a zombie pointer
	Zombie	jinkies;
	joinks = joinks->newZombie("Fred"); // Malloc because it uses new which is cpp malloc
	joinks->announce(); // show that fred exists
	jinkies.randomChump("Daphne");
	delete joinks; // because joinks is on the heap you have to free it.
	return (0);
}
