/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 20:25:46 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/08 21:35:08 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "a materia of type " << type << " has been created" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Materia " << getType() << " has been destroyed" << std::endl;
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

void			AMateria::use(ICharacter& target)
{
	std::cout << getType() << " was used on " << target.getName() << std::endl;
}