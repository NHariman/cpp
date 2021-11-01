/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/13 22:53:47 by nhariman      #+#    #+#                 */
/*   Updated: 2021/11/01 20:08:23 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon 		&_weapon; // address because it's directly assigned
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void		attack() const;
};

#endif
