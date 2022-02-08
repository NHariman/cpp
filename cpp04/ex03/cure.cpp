/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 21:44:35 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/08 22:12:14 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cure.hpp"

Cure::Cure()
{
	_type = "cure";
	std::cout << "Cure materia has been made" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure materia has been destroyed" << std::endl;
}

AMateria*	Cure::clone() const
{
	AMateria *obj = new Cure();
	obj._type = this->_type;

	return obj;
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}