/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 20:25:46 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/01 21:47:03 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "colours.hpp"

AMateria::AMateria()
{
	_type = "";
	std::cout << B_RED << "a materia of type " << _type << " has been created" << B_END << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << B_RED << "a materia of type " << type << " has been created" << B_END << std::endl;
}

AMateria::AMateria(const AMateria& obj) : _type(obj.getType())
{
	std::cout << B_RED << "AMateria copy constructor used." << B_END << std::endl;
	*this = obj;
}

AMateria&	AMateria::operator=(const AMateria& obj)
{
	std::cout << B_RED << "AMateria assignment overload used." << B_END << std::endl;
	this->_type = obj.getType();
	return *this;
}

AMateria::~AMateria()
{
	std::cout << B_RED << "Materia " << getType() << " has been destroyed" << B_END << std::endl;
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

void			AMateria::use(ICharacter& target)
{
	std::cout << B_YELLOW << "From AMateria::use()" << std::endl;
	if (this->getType().compare("cure"))
		std::cout << "*AMateria: heals " << target.getName() << "'s wounds *" << std::endl;
	else if (this->getType().compare("ice"))
		std::cout << "*AMateria: shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else
		std::cout << this->getType() << " was used on " << target.getName() << std::endl;
	std::cout << B_END;
}