/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 15:58:03 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/13 15:18:33 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// unnamed scav and fragtraps had to be able to be created in
// order to initialise the DiamondTrap.
// scav and frag now  have a protected unnamed initializer so it can be used
// within the diamond trap functions but not within the main

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;
	protected:
		DiamondTrap();
		void	setName(std::string name);
	public:
		void	attack(std::string const &target);
		DiamondTrap(std::string name);
		~DiamondTrap();
		void	whoAmI();
		std::string	getName();
};

#endif