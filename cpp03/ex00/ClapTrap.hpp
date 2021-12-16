/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/16 17:28:44 by nhariman      #+#    #+#                 */
/*   Updated: 2021/12/16 20:02:12 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>

class	ClapTrap
{
	private:
		ClapTrap();
		std::string		_name;
		unsigned int	_hp; // hit points
		unsigned int	_ep; // energy points
		unsigned int	_dmg; // attack damage
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		void		setName(std::string name);
		std::string	getName();
		unsigned int	getHp();
		unsigned int	getEp();
		unsigned int	getDmg();
		void		attack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif
