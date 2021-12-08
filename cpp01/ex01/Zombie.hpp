/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 13:57:47 by nhariman      #+#    #+#                 */
/*   Updated: 2021/12/08 21:24:59 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		Zombie(std::string name);
		Zombie(const Zombie &obj);
		~Zombie();
		void		announce();
		void		setName(std::string name);
};

Zombie*		zombieHorde(int n, std::string name);

#endif
