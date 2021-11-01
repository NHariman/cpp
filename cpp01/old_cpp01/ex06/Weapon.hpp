/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/13 22:40:28 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/15 23:29:37 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream> //to use cout
#include <string> //string stuff
#include <sstream> // manipulate std::strings

class Weapon
{
	private:
		std::string _type; // type can be assigned through various methods so just a var.
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		const	std::string		&getType(); // gets the address of where the type is found.
		void					setType(std::string type);
};

#endif
