/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 17:52:56 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/24 19:26:01 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "colours.hpp"
#include "cure.hpp"
#include "ice.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << B_YELLOW << "Character " << name << " lives!" << B_END << std::endl;
}

Character::Character(const Character& obj) : _name(obj.getName())
{
	*this = obj;
	std::string type;
	std::cout << B_YELLOW << "Character copy constructor used!" << B_END << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if(obj.getItem(i))
		{
			type = obj.getItem(i)->getType();
			delete obj.getItem(i);
			if (type.compare("cure"))
				this->inventory[i] = new Cure();
			else if (type.compare("ice"))
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
		if(obj.getItem(i))
		{
			type = obj.getItem(i)->getType();
			delete obj.getItem(i);
			if (type.compare("cure"))
				this->inventory[i] = new Cure();
			else if (type.compare("ice"))
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
		if (this->inventory[i])
			delete this->inventory[i];
	}
	std::cout << B_YELLOW << this->getName() << " has died." << B_END << std::endl;
}

std::string const &Character::getName() const
{
	return this->_name;
}

AMateria	*Character::getItem(int i) const
{
	return this->inventory[i];
}

void	Character::equip(AMateria *m)
{
	int i = 0;
	while (i < 4)
	{
		if (this->inventory[i])
			i++;
		else
		{
			*this->inventory[i] = *m;
			std::cout << B_YELLOW << m->getType() << " has been equipped" << B_END << std::endl;
			return ;
		}
	}
	std::cout << B_YELLOW << this->getName() << "'s inventory is full!" << B_END << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	(void)idx;
	(void)target;
	return ;
}

void	Character::unequip(int idx)
{
	std::cout << B_YELLOW << "materia has been unequipped!" << B_END << std::endl;
	if (this->inventory[idx])
	{
		this->inventory[idx] = NULL;
	}
}


