/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 14:19:40 by nhariman      #+#    #+#                 */
/*   Updated: 2021/12/08 19:17:50 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void		randomChump(std::string name)
{
	Zombie	fred(name); // name it
	fred.announce(); // announce its presence
}
