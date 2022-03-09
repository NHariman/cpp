/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/16 19:50:18 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/09 21:02:52 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "colours.hpp"

int		main(void)
{
	std::cout << B_GREEN << "The DiamondTrap Test." << B_WHITE << std::endl;
	std::cout << B_YELLOW << "We will now create a DiamondTrap." << B_WHITE << std::endl;
	DiamondTrap d("Dia");
	d.getStats();
	d.whoAmI();
	std::cout << B_BLUE << "Diamondtraps use its own attack based on ScavTrap:" << B_WHITE << std::endl;
	d.attack("Rando");
	std::cout << B_BLUE << "It uses the claptrap name as it uses claptrap functions" << B_WHITE << std::endl;
	d.takeDamage(2);
	d.beRepaired(2);
	std::cout << B_BLUE << "DiamondTraps use both Scav and Frag Trap specials, which can be used too:" << B_WHITE << std::endl;
	d.highFivesGuys();
	d.guardGate();
	std::cout << B_BLUE << "Show that Dia can also lose energy points in its attack function:" << B_WHITE << std::endl;
	for (int i = 0; i < 51; i++)
		d.attack("some Rando");
	d.getStats();
	std::cout << B_BLUE << "Break irreparably" << B_WHITE << std::endl;
	d.takeDamage(100);
	d.getStats();
	std::cout << B_BLUE << "try to attack" << B_WHITE << std::endl;
	d.attack("some Rando");
	std::cout << B_BLUE << "try to repair:" << B_WHITE << std::endl;
	d.beRepaired(2);
	std::cout << "THE END" << std::endl;
	return 0;
}