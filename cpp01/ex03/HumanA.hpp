/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 18:52:08 by nhariman      #+#    #+#                 */
/*   Updated: 2021/11/01 21:38:46 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_A
#define _HUMAN_A

#include "Weapon.hpp"

class	HumanA{
	private:
		std::string _name;
		Weapon		&_weapon;
		HumanA();
	public:
		HumanA(std::string name, Weapon& Weapon);
		~HumanA();
		void	attack() const;
};

#endif
