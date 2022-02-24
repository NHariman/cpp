/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 21:44:35 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/24 21:01:23 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cure.hpp"
#include "colours.hpp"

Cure::Cure() : AMateria("cure")
{
	_type = "cure";
	std::cout << B_GREEN << "Cure materia has been made" << B_END << std::endl;
}

Cure::~Cure()
{
	std::cout << B_GREEN << "Cure materia has been destroyed" << B_END << std::endl;
}

AMateria*	Cure::clone() const
{
	AMateria *obj = new Cure();
	std::cout << B_GREEN << "Cure Clone has been used" << B_END << std::endl;
	return obj;
}

void		Cure::use(ICharacter& target)
{
	std::cout << B_GREEN << "* heals " << target.getName() << "'s wounds *" << B_END << std::endl;
}