#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "colours.hpp"
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		void	challengeNewcomer(std::string const &target);
		std::string randomQuestName(int nb);
		std::string	randomDamageQuote(void);
		std::string	randomHealQuote(void);
		std::string	randomRangedQuote(void);
		std::string	randomMeleeQuote(void);
};

#endif