/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 17:52:56 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/17 22:11:22 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character " << name << " lives!" << std::endl;
}

Character::Character(const Character& obj) : _name(obj.getName())
{
	*this = obj;
	std::string type;
	for (int i = 0; i < 4; i++)
	{
		if(obj.getItem(i))
		{
			type = obj.getItem(i)->getType();
			delete obj.getItem(i);
			this->inventory[i] = new AMateria(type); // replace with create materia?
		}
	}
}

Character&	Character::operator=(const Character& obj)
{
	std::string type;
	for (int i = 0; i < 4; i++)
	{
		if (obj.getItem(i))
		{
			type = obj.getItem(i)->getType();
			delete obj.getItem(i);
			this->inventory[i] = new AMateria(type); // replace with create materia?
		}
	}
	this->_name = obj.getName();
	return *this;
}

Character::~Character()
{
		for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	std::cout << obj.getName() << " has died." << std::endl;
}

std::string const &Character::getName() const
{
	return this->_name;
}

AMateria	Character::getItem(int i) const
{
	return this->inventory[i];
}

void	Character::equip(AMateria *m)
{
	int i = 0;
	while (i < 4)
	{
		if (*this->inventory[i])
			i++;
		else
		{
			*this->inventory[i] = *m;
			std::cout << m->getType() << " has been equipped" << std::endl;
			return ;
	}
	std::cout << this->getName() << "'s inventory is full!" << std::endl;
}

void	Character::unequip(int idx)
{
	if (*this->inventory[idx])
		*this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	AMateria::use(idx, target);
}




