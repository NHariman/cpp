/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 17:54:07 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/25 21:08:38 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		Character();
		std::string	_name;
		int			_inv_id[4];
		AMateria	*inventory[4];
	public:
		int		getInvId(int i) const;
		AMateria	*getItem(int i) const;
		Character(std::string name);
		Character(const Character& obj);
		Character& operator=(const Character& obj);
		virtual ~Character();
		std::string const & getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif