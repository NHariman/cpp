/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/23 16:03:23 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/23 19:31:10 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

AMateriaSource::AMateriaSource()
{
	std::cout << "A MateriaSource has been created" << std::endl;
}

AMateriaSource::~AMateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->index[i])
			delete this->index[i];
	}
	std::cout << "A MateriaSource has been destroyed" << std::endl;
}

AMateriaSource::AMateriaSource(const MateriaSource &obj)
{
	*this = obj;
	std::cout << "A MateriaSource copy constructor called" << std::endl;
}

MateriaSource* AMateriaSource::operator=(const MateriaSource &obj)
{
	for (int i = 0; i < 4; i++)
		*this->index[i] = *obj->index[i];
	std::cout << "A MateriaSource assignation operator" << std::endl;
	return *this;
}

void	AMateriaSource::learnMateria(AMateria *obj)
{
	int i = 0;
	while (i < 4)
	{
		if (*this->index[i])
			i++;
		else
		{
			*this->index[i] = *m;
			std::cout << obj->getType() << " has been learnt" << std::endl;
			return ;
		}
	}
	std::cout << "This MateriaSource is full!" << std::endl;
}

AMateria*	AMateriaSource::createMateria(std::string const &obj)
{
	int i = 0;
	std::cout << "createMateria has been called." << std::endl;
	while (i < 4)
	{
		if (*this->index[i]->getType().compare(obj))
			return (this->index[i]->clone());
		else
			i++;
	}
	return (0);
}