/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/16 19:50:18 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/09 20:43:02 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "colours.hpp"

int		main(void)
{
	std::cout << B_RED << "The FragTrap Test." << B_WHITE << std::endl;
	std::cout << B_BLUE << "We will now create a FragTrap." << B_WHITE << std::endl;
	FragTrap helen("Helen");
	helen.getStats();
	std::cout << B_BLUE << "Helen uses its own attack function." << B_WHITE << std::endl;
	helen.attack("Rando");
	std::cout << B_BLUE << "Fragtraps can also use Claptrap functions:" << B_WHITE << std::endl;
	helen.takeDamage(2);
	helen.beRepaired(2);
	std::cout << B_BLUE << "FragTrap also has its own function, which can be used too:" << B_WHITE << std::endl;
	helen.highFivesGuys();
	std::cout << B_BLUE << "Show that helen can also lose energy points in its attack function:" << B_WHITE << std::endl;
	for (int i = 0; i < 101; i++)
		helen.attack("some Rando");
	helen.getStats();
	std::cout << B_BLUE << "Show that helen can no longer repair itself:" << B_WHITE << std::endl;
	helen.beRepaired(2);

	std::cout << B_BLUE << "New Fragtrap:" << B_WHITE << std::endl;
	FragTrap charles("Charles");
	std::cout << B_BLUE << "Damage 50:" << B_WHITE << std::endl;
	charles.takeDamage(50);
	charles.getStats();
	std::cout << B_BLUE << "repair 20:" << B_WHITE << std::endl;
	charles.beRepaired(20);
	charles.getStats();
	std::cout << B_BLUE << "repair 500:" << B_WHITE << std::endl;
	charles.beRepaired(500);
	std::cout << B_BLUE << "check stats:" << B_WHITE << std::endl;
	charles.getStats();
	std::cout << B_BLUE << "Damage beyond repair:" << B_WHITE << std::endl;
	charles.takeDamage(100);
	std::cout << B_BLUE << "Try to attack:" << B_WHITE << std::endl;
	charles.attack("some Rando");
	std::cout << B_BLUE << "Try to repair:" << B_WHITE << std::endl;
	charles.beRepaired(2);
	std::cout << "THE END" << std::endl;
	return 0;
}