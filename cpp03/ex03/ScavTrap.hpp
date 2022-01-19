/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 11:43:32 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/19 14:01:41 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

// in this case public is used as scavtrap has to be able to access
// ClapTrap functions
// https://www.geeksforgeeks.org/difference-between-public-and-private-in-c-with-example/

class ScavTrap : virtual public ClapTrap
{
	protected:
		ScavTrap();
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		void	guardGate();
};

// this day is all about inheritance.
// https://www.geeksforgeeks.org/inheritance-in-c/
// implementing inheritance in c++:
// class subclass_name : access_mode base_class_name
// {
//		body;
//	};

// access_mode is the mode in which you want to inherit the subclass:
// https://www.learncpp.com/cpp-tutorial/inheritance-and-access-specifiers/
// - private : can only be accessed by Base members and friends
//		not derived classes, so member functions of the same class & friends only.
// - public : can be accessed by anybody
// - protected : can be accessed by Base members, friends AND derived classes

// A derived class is a class created from an existing class.
// it inherites all members and member functions of a base class.
// so in this case, ScavTrap is the derived class and ClapTrap is the base class.
#endif