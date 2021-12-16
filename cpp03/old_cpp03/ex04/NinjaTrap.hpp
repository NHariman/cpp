#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"

class	NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		~NinjaTrap();
		void 	ninjaShoebox(ClapTrap & target);
		void			setEnergy(void);
		void			setHealth(void);
		void			setAtkM(void);
		void			setAtkR(void);
		void			setDef(void);
};

#endif