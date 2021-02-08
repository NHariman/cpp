/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 22:38:46 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/08 23:53:33 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
	private:
		Zombie *_zombies;
		int		_hordesize;
	public:
		ZombieHorde(int n);
		ZombieHorde();
		~ZombieHorde();
		void announce();
		int get_hordesize();
};

#endif