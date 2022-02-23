/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 17:47:45 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/23 22:02:30 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>

// circular header problem: https://stackoverflow.com/questions/4757565/what-are-forward-declarations-in-c

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter(){};
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif