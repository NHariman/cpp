/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 14:20:26 by nhariman      #+#    #+#                 */
/*   Updated: 2021/12/08 19:18:54 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie	*joinks; // this instantiates a zombie pointer
	joinks = newZombie("Fred"); // Malloc because it uses new which is cpp malloc
	joinks->announce(); // show that fred exists
	randomChump("Daphne");
	delete joinks; // because joinks is on the heap you have to free it.
	return (0);
}
