#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "colours.hpp"

class	ClapTrap
{
	protected:
		unsigned int 			_hp;
		unsigned int 			_maxhp;
		unsigned int			_energy;
		unsigned int			_maxenergy;
		int						_lvl;
		std::string				_name;
		int						_atk_m; // melee attack damage
		int						_atk_r; // ranged attack dmg
		int						_def; //armor damage reduction
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		beRepaired(unsigned int amount);
		std::string	getName(void);
		int			getDef(void);
		void		setName(std::string name);
		void		takeDamage(unsigned int amount);
		std::string randomAttackName(int atk);
		std::string	randomDamageQuote(void);
		std::string	randomHealQuote(void);
		std::string	randomRangedQuote(void);
		std::string	randomMeleeQuote(void);
};

#endif