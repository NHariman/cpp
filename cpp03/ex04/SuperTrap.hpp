#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "colours.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class	SuperTrap : public FragTrap, public NinjaTrap
{
		NinjaTrap n;
		FragTrap f;
	public:
		SuperTrap();
		SuperTrap(std::string name);
		~SuperTrap();
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void vaulthunter_dot_exe(std::string const &target);
		void ninjaShoebox(ClapTrap & target);
};
// https://stackoverflow.com/questions/24345034/qualified-class-member
#endif