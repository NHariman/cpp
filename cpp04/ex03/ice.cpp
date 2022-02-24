/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 21:59:11 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/24 21:01:15 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ice.hpp"
#include "colours.hpp"

Ice::Ice() : AMateria("ice")
{
	_type = "ice";
	std::cout << B_BLUE << "Ice materia has been made" << B_END << std::endl;
}

Ice::~Ice()
{
	std::cout << B_BLUE << "Ice materia has been destroyed" << B_END << std::endl;
}

AMateria*	Ice::clone() const
{
	AMateria *obj = new Ice();
	std::cout << B_BLUE << "Ice clone has been called" << B_END << std::endl;
	return obj;
}

void		Ice::use(ICharacter& target)
{
	std::cout << B_BLUE << "* shoots an ice bolt at " << target.getName() << " *" << B_END << std::endl;
}