/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 17:52:56 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/01 21:53:40 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "colours.hpp"
#include "cure.hpp"
#include "ice.hpp"

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inv_id[i] = 0;
	std::cout << B_YELLOW << "Character " << name << " lives!" << B_END << std::endl;
}

Character::Character(const Character& obj) : _name(obj.getName())
{
	*this = obj;
	std::string type;
	std::cout << B_YELLOW << "Character copy constructor used!" << B_END << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_inv_id[i] = obj.getInvId(i);
		if(obj.getInvId(i) == 1)
		{
			type = obj.getItem(i)->getType();
			delete this->inventory[i];
			if (!type.compare("cure"))
				this->inventory[i] = new Cure();
			else if (!type.compare("ice"))
				this->inventory[i] = new Ice(); // replace with create materia?
		}
	}
}

Character&	Character::operator=(const Character& obj)
{
	std::cout << B_YELLOW << "Character assignation overload used!" << B_END << std::endl;
	std::string type;
	for (int i = 0; i < 4; i++)
	{
		this->_inv_id[i] = obj.getInvId(i);
		if(obj.getInvId(i) == 1)
		{
			type = obj.getItem(i)->getType();
			delete this->inventory[i];
			if (!type.compare("cure"))
				this->inventory[i] = new Cure();
			else if (!type.compare("ice"))
				this->inventory[i] = new Ice(); // replace with create materia?
		}
	}
	this->_name = obj.getName();
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv_id[i] == 1)
			delete this->inventory[i];
	}
	std::cout << B_YELLOW << this->getName() << " has died." << B_END << std::endl;
}

std::string const &Character::getName() const
{
	return this->_name;
}

int		Character::getInvId(int i) const
{
	return this->_inv_id[i];
}

AMateria	*Character::getItem(int i) const
{
	if (*this->_inv_id == 1)
		return this->inventory[i];
	return NULL;
}

void	Character::equip(AMateria *m)
{
	int i = 0;
	while (i < 4)
	{
		if (this->_inv_id[i] == 1)
			i++;
		else
		{
			this->_inv_id[i] = 1;
			this->inventory[i] = m->clone();
			std::cout << B_YELLOW << m->getType() << " has been equipped" << B_END << std::endl;
			return ;
		}
	}
	std::cout << B_YELLOW << this->getName() << "'s inventory is full!" << B_END << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (this->_inv_id[idx] == 1)
		this->inventory[idx]->use(target);
	else
		std::cout << "This slot is empty" << std::endl;
}

void	Character::unequip(int idx)
{
	if (this->_inv_id[idx] == 1 && this->inventory[idx])
	{
		this->_inv_id[idx] = 0;
		this->inventory[idx] = NULL;
		std::cout << B_YELLOW << "materia has been unequipped!" << B_END << std::endl;
	}
}


