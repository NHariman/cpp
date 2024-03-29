/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/16 19:50:18 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/09 19:55:07 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
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
	std::cout << B_GREEN << "We will now command bob to attack, despite it being dead already." << B_WHITE << std::endl;
	bob.attack("guy");
	std::cout << B_GREEN << "Bob has gone to a better place... permanently." << B_WHITE << std::endl;

	std::cout << B_RED << "We will now make steve lose all its energy points." << B_END << std::endl;
	for (int i = 0; i < 10; i++)
		steve.attack("some Rando");
	std::cout << B_RED << "Steve cannot recover now either." << B_END << std::endl;	
	steve.beRepaired(10);
	std::cout << "THE END" << std::endl;
	return 0;
}