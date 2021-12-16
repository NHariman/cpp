#include "FragTrap.hpp"

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
	return (0);
}