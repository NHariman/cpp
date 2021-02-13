/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/13 23:42:49 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/13 23:49:18 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon 		*_weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void		setWeapon(Weapon &weapon);
		void		attack() const;
};

#endif