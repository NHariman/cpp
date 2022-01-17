/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/16 19:50:18 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/17 15:46:33 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "colours.hpp"

int		main(void)
{
	std::cout << B_RED << "Creating two ClapTraps, bob and steve." << B_WHITE << std::endl;
	ClapTrap	bob("bob");
	ClapTrap	steve("steve");

	std::cout << B_RED << "Bob will now attack a random man named Stephen" << B_WHITE << std::endl;
	bob.attack("Stephen");
	std::cout << B_BLUE << "Steve will now:" << std::endl;
	std::cout << "- take damage," << B_WHITE << std::endl;
	steve.takeDamage(2);
	std::cout <<  B_BLUE << "- be repaired to full health," << B_WHITE << std::endl;
	steve.beRepaired(2);
	std::cout <<  B_BLUE << "- get attacked again" << B_WHITE << std::endl;
	steve.takeDamage(2);
	std:: cout <<  B_BLUE << "- only recover half of the lost health" << B_WHITE << std::endl;
	steve.beRepaired(1);
	std::cout <<  B_BLUE << "Because his life is unfortunate." << B_WHITE << std::endl;

	std::cout << B_GREEN << "We will now irrepairably break bob." << B_WHITE << std::endl;
	bob.takeDamage(10);
	std::cout << B_GREEN << "We will try to attack bob again" << B_WHITE << std::endl;
	bob.takeDamage(10);
	std::cout << B_GREEN << "We will to repair bob" << B_WHITE << std::endl;
	bob.beRepaired(10);
	std::cout << B_GREEN << "Bob has gone to a better place... permanently." << B_WHITE << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << B_RED << "The ScavTrap Test." << B_WHITE << std::endl;
	std::cout << B_PURPLE << "We will now create a ScavTrap." << B_WHITE << std::endl;
	ScavTrap liv("liv");
	liv.getStats();
	std::cout << B_PURPLE << "Scavtraps can also use Claptrap functions:" << B_WHITE << std::endl;
	liv.attack("Rando");
	liv.takeDamage(2);
	liv.beRepaired(2);
	std::cout << B_PURPLE << "ScavTrap also has its own function, which can be used too:" << B_WHITE << std::endl;
	liv.guardGate();
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << B_RED << "The FragTrap Test." << B_WHITE << std::endl;
	std::cout << B_BLUE << "We will now create a FragTrap." << B_WHITE << std::endl;
	FragTrap helen("Helen");
	helen.getStats();
	std::cout << B_BLUE << "Fragtraps can also use Claptrap functions:" << B_WHITE << std::endl;
	helen.attack("Rando");
	helen.takeDamage(2);
	helen.beRepaired(2);
	std::cout << B_BLUE << "FragTrap also has its own function, which can be used too:" << B_WHITE << std::endl;
	helen.highFivesGuys();

	std::cout << "THE END" << std::endl;
	return 0;
}