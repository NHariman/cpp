/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 20:25:48 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/17 21:40:45 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria{
	private:
		AMateria();
	protected:
		std::string _type;
		AMateria(std::string const &type);
	public:
		AMateria(const AMateria& obj);
		virtual ~AMateria();
		std::string const &getType() const; // returns materia type
		AMateria& operator=(const AMateria& obj);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif