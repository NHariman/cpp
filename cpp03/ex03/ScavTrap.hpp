#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "colours.hpp"
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	// private:
	// 	unsigned int 			_hp;
	// 	static const int 		_maxhp = 100;
	// 	unsigned int			_energy;
	// 	static const int		_maxenergy = 100;
	// 	int						_lvl;
	// 	std::string				_name;
	// 	int						_atk_m; // melee attack damage
	// 	int						_atk_r; // ranged attack dmg
	// 	int						_def; //armor damage reduction
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		void	challengeNewcomer(std::string const &target);
		std::string randomQuestName(int nb);
};

#endif