/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 20:25:46 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/23 22:03:54 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "colours.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "a materia of type " << type << " has been created" << std::endl;
}

AMateria::AMateria(const AMateria& obj) : _type(obj.getType())
{
	*this = obj;
}

AMateria&	AMateria::operator=(const AMateria& obj)
{
	this->_type = obj.getType();
	return *this;
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
	std::cout << B_YELLOW << "From AMateria::use()" << std::endl;
	if (this->getType().compare("cure"))
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	else if (this->getType().compare("ice"))
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else
		std::cout << this->getType() << " was used on " << target.getName() << std::endl;
	std::cout << B_END;
}