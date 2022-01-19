/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 15:26:03 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/19 14:01:39 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

// the inheritance of both FragTrap and ScavTrap have been changed
// to virtual public
// in order to avoid the "diamond problem"
// https://www.geeksforgeeks.org/virtual-base-class-in-c/


class FragTrap : virtual public ClapTrap
{
	protected:
		FragTrap();
	public:
		FragTrap(std::string name);
		~FragTrap();
		void	highFivesGuys(void);
};

#endif