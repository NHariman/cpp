/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/13 22:53:47 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/13 23:37:49 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon 		&_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void		attack() const;
};

#endif
