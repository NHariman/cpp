/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/16 17:28:44 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/09 20:21:44 by nhariman      ########   odam.nl         */
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
		unsigned int	_ogHp; // original hp
		unsigned int	_ogEp; // original ep
		unsigned int	_hp; // hit points
		unsigned int	_ep; // energy points
		unsigned int	_atk; // attack damage
	protected:
		ClapTrap();
		void		setOgHp(unsigned int hp);
		void		setOgEp(unsigned int ep);
		void		setHp(unsigned int hp);
		void		setEp(unsigned int ep);
		void		setAtk(unsigned int atk);
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		void		setName(std::string name);
		std::string	getName();
		unsigned int	getOgHp();
		unsigned int	getOgEp();
		unsigned int	getHp();
		unsigned int	getEp();
		unsigned int	getAtk();
		void		getStats(void);
		void		attack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif
