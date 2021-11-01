/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 13:57:47 by nhariman      #+#    #+#                 */
/*   Updated: 2021/11/01 16:40:26 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;
		Zombie(std::string name);
	public:
		Zombie();
		~Zombie();
		void		announce();
		Zombie*		zombieHorde(int n, std::string name);
};

#endif
