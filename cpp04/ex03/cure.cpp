/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 21:44:35 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/17 21:44:45 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cure.hpp"
#include "colour.hpp"

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
	return obj;
}

void		Cure::use(ICharacter& target)
{
	std::cout << B_GREEN << "* heals " << target.getName() << "'s wounds *" << B_END << std::endl;
}