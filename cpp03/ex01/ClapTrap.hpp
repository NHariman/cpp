/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/16 17:28:44 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/17 15:48:45 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>

// in this case ClapTrap(); is protected so it cannot be used in the main.cpp
// but it CAN be used by ScavTrap to create a Claptrap and assign a name later

class	ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hp; // hit points
		unsigned int	_ep; // energy points
		unsigned int	_dmg; // attack damage
	protected:
		ClapTrap();
		void		setHp(unsigned int hp);
		void		setEp(unsigned int ep);
		void		setDmg(unsigned int dmg);
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		void		setName(std::string name);
		std::string	getName();
		unsigned int	getHp();
		unsigned int	getEp();
		unsigned int	getDmg();
		void		getStats(void);
		void		attack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif
