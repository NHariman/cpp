#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap hj("Handsome Jack");
	FragTrap rhys("Rhys");

	rhys.rangedAttack(hj.getName());
	rhys.meleeAttack(hj.getName());
	hj.takeDamage(10);
	hj.rangedAttack(rhys.getName());
	hj.meleeAttack(rhys.getName());
	rhys.takeDamage(10);
	hj.beRepaired(5);
	rhys.beRepaired(5);

	rhys.takeDamage(1000);
	rhys.takeDamage(5);
	rhys.beRepaired(5);

	rhys.vaulthunter_dot_exe(hj.getName());
	hj.vaulthunter_dot_exe(rhys.getName());

	ScavTrap hello;
	ScavTrap bot("Bot");

	bot.rangedAttack(hello.getName());
	bot.meleeAttack(hello.getName());
	hello.takeDamage(10);
	hello.rangedAttack(bot.getName());
	hello.meleeAttack(bot.getName());
	bot.takeDamage(10);
	hello.beRepaired(5);
	bot.beRepaired(5);

	bot.takeDamage(1000);
	bot.takeDamage(5);
	bot.beRepaired(5);

	bot.challengeNewcomer(hello.getName());
	hello.challengeNewcomer(bot.getName());	
	return (0);
}