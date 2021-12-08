/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 14:19:59 by nhariman      #+#    #+#                 */
/*   Updated: 2021/12/08 19:17:34 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		newZombie(std::string name)
{
	Zombie	*Zomblet = new Zombie(name); // use new to allocate memory for a new zombie & name it
	return (Zomblet); // use it elsewhere
}
