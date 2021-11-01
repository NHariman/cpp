/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 18:52:32 by nhariman      #+#    #+#                 */
/*   Updated: 2021/11/01 21:35:45 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_B
#define _HUMAN_B

#include "Weapon.hpp"

class	HumanB{
	private:
		std::string _name;
		Weapon		*_weapon;
		HumanB();
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon &set_weapon);
		void	attack() const;
};

#endif
