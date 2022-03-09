/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/16 17:28:44 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/09 20:02:36 by nhariman      ########   odam.nl         */
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
		unsigned int	_atk; // attack damage
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		void		setName(std::string name);
		std::string	getName();
		unsigned int	getHp();
		unsigned int	getEp();
		unsigned int	getatk();
		void		attack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif
