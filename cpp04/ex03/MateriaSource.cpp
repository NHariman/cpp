/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/23 16:03:23 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/25 20:33:06 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "colours.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_id[i] = 0;
	std::cout << B_PURPLE << "A MateriaSource has been created" << B_END << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_id[i] == 1)
			delete this->index[i];
	}
	std::cout <<  B_PURPLE << "A MateriaSource has been destroyed" << B_END << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	*this = obj;
	std::cout << B_PURPLE << "A MateriaSource copy constructor called" << B_END << std::endl;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource &obj)
{
	for (int i = 0; i < 4; i++)
		*this->index[i] = *obj.index[i];
	std::cout << B_PURPLE << "A MateriaSource assignation operator" << B_END << std::endl;
	return *this;
}

void	MateriaSource::learnMateria(AMateria *obj)
{
	int i = 0;
	while (i < 4)
	{
		if (this->_id[i] == 0)
		{
			this->index[i] = obj;
			this->_id[i] = 1;
			std::cout << B_PURPLE << obj->getType() << " has been learnt at position: " << i << B_END << std::endl;
			return ;
		}
		else
			i++;

	}
	std::cout << B_PURPLE << "This MateriaSource is full!" << B_END << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const &obj)
{
	int i = 0;
	std::cout << B_PURPLE << "createMateria has been called." << B_END << std::endl;
	while (i < 4)
	{
		if (!this->index[i]->getType().compare(obj))
			return (this->index[i]->clone());
		else
			i++;
	}
	return (0);
}