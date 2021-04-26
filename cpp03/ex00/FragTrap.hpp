#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class	FragTrap
{
	private:
		int 		hp = 100;
		const int 	maxhp = 100;
		int			energy = 100;
		const int	maxenergy = 100;
		int			lvl = 1;
		std::string	name;
		int			atk_m = 30; // melee attack damage
		int			atk_r = 20; // ranged attack dmg
		int			def= 5; //armor damage reduction
	public:
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif