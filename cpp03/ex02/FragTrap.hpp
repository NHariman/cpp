#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "colours.hpp"

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		void		vaulthunter_dot_exe(std::string const &target);
		std::string randomAttackName(int atk);
};

#endif