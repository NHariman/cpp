/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 15:58:03 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/17 20:27:57 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		FragTrap f;
		ScavTrap s;
		std::string _name;
		DiamondTrap();
	protected:
		void	setName(std::string name);
	public:
		void	attack(std::string const &target);
		DiamondTrap(std::string name);
		~DiamondTrap();
		void	whoAmI();
		std::string	getName();
};

#endif