/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 21:59:11 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/23 21:52:07 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ice.hpp"
#include "colours.hpp"

Ice::Ice()
{
	_type = "ice";
	std::cout << "Ice materia has been made" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice materia has been destroyed" << std::endl;
}

AMateria*	Ice::clone() const
{
	AMateria *obj = new Ice();
	return obj;
}

void		Ice::use(ICharacter& target)
{
	std::cout << B_BLUE << "* shoots an ice bolt at " << target.getName() << " *" << B_END << std::endl;
}