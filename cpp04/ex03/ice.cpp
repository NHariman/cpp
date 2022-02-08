/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 21:59:11 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/08 22:12:23 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ice.hpp"

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
	obj._type = this->_type;

	return obj;
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}