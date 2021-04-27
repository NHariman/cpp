#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "colours.hpp"

#include "ClapTrap.hpp"


class	FragTrap : public ClapTrap
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
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		void		vaulthunter_dot_exe(std::string const &target);
		std::string randomAttackName(int atk);
};

#endif