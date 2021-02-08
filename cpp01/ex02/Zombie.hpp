/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 18:10:21 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/08 21:56:36 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;
		std::string	_type;
	public:
		Zombie(std::string name, std::string type);
		~Zombie();
		void		announce();
		std::string	get_name();
};

#endif
