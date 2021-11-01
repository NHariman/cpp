/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 14:19:40 by nhariman      #+#    #+#                 */
/*   Updated: 2021/11/01 16:01:59 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void		Zombie::randomChump(std::string name)
{
	this->_name = name; // name it
	announce(); // announce its presence
}
