/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 20:25:48 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/24 20:58:05 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria& obj);
		virtual ~AMateria();
		std::string const &getType() const; // returns materia type
		std::string hello();
		bool	empty(void) const;
		AMateria& operator=(const AMateria& obj);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif