#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "colours.hpp"

#include "ClapTrap.hpp"


class	FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		void		vaulthunter_dot_exe(std::string const &target);
		void			setEnergy(void);
		void			setHealth(void);
		void			setAtkM(void);
		void			setAtkR(void);
		void			setDef(void);
		std::string 	randomAttackName(int atk);
		std::string		randomDamageQuote(void);
		std::string		randomHealQuote(void);
		std::string		randomRangedQuote(void);
		std::string		randomMeleeQuote(void);
};

#endif