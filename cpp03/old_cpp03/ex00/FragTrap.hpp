#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "colours.hpp"

class	FragTrap
{
	private:
		unsigned int 			_hp;
		static const int 		_maxhp = 100;
		unsigned int			_energy;
		static const int		_maxenergy = 100;
		int						_lvl;
		std::string				_name;
		int			_atk_m; // melee attack damage
		int			_atk_r; // ranged attack dmg
		int			_def; //armor damage reduction
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	beRepaired(unsigned int amount);
		std::string	getName(void);
		void		setName(std::string name);
		void	takeDamage(unsigned int amount);
		std::string randomAttackName(int atk);
		std::string	randomDamageQuote(void);
		std::string	randomHealQuote(void);
		std::string	randomRangedQuote(void);
		std::string	randomMeleeQuote(void);

		void	vaulthunter_dot_exe(std::string const &target);
};

#endif