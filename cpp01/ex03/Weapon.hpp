/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 18:41:11 by nhariman      #+#    #+#                 */
/*   Updated: 2021/11/01 21:35:48 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP
# define _WEAPON_HPP

#include <iostream>

class	Weapon{
	private:
		std::string _type;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		const std::string&	getType();
		void				setType(std::string type);
};

#endif
