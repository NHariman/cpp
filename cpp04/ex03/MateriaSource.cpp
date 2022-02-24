/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/23 16:03:23 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/24 22:03:11 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "colours.hpp"

MateriaSource::MateriaSource()
{
	std::cout << B_PURPLE << "A MateriaSource has been created" << B_END << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->index[i])
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
	std::cout << B_PURPLE << "entered learnMateria" << B_END << std::endl;
	while (i < 4)
	{
		std::cout << B_PURPLE << "entered loop" << B_END << std::endl;
		std::cout << B_PURPLE << "trying this->index[i]->empty()" << B_END << std::endl;
		if (this->index[i])
		{
			std::cout << B_PURPLE << i << B_END << std::endl;
			this->index[i]->empty();
			this->index[i] = obj;
			std::cout << B_PURPLE << obj->getType() << " has been learnt at position: " << i << B_END << std::endl;
			this->index[i]->empty();
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
		if (this->index[i]->getType().compare(obj))
			return (this->index[i]->clone());
		else
			i++;
	}
	return (0);
}