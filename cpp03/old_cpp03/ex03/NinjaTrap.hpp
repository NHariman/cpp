#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"

class	NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		~NinjaTrap();
		void ninjaShoebox(ClapTrap & target);
};

#endif