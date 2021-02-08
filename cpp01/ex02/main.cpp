/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 21:50:26 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/08 22:44:13 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main(void)
{
	std::string name;
	std::string type;
	std::string answer;

	//random zombie generation
	ZombieEvent ohno;
	std::cout << "Welcome to a zombie apocalypse tour! We just started the event.\n";
	std::cout << "Here comes the first Zombie:\n" << std::endl;
	Zombie zombie = ohno.randomChump();
	std::cout << "\n\nThis zombie was allocated on the stack, we can't kill it yet.\n";
	std::cout << "\nMoving on...\n\n";

	//user generated zombie
	std::cout << "Hey, what kind of Zombie do you want to see?\n[INPUT ZOMBIE TYPE]> ";
	std::getline(std::cin, type);
	ohno.setZombieType(type);
	std::cout << "Cool, we found one, a heap zombie, what should we call them?\n[INPUT ZOMBIE NAME]> ";
	std::getline(std::cin, name);
	Zombie *zombie2 = ohno.newZombie(name);
	std::cout << "\n\nGreat, let's see if it talks.\n\n";
	zombie2->announce();
	std::cout << "\n\nCool. Now kill it.\n";
	delete zombie2;

	//delete random zombie
	std::cout << "\n\nthat concludes the tour of the zombie apocalyse. Stay alive people!\n";
	std::cout << "\nHey can you take care of the zombie you met at the start?\n[Y/N]> ";
	std::getline(std::cin, answer);
	while (answer.compare("Y") != 0 && answer.compare("N") != 0)
	{
		std::cout << "Please Y or N?\n";
		std::getline(std::cin, answer);	
	}
	if (answer.compare("N") == 0)
		std::cout << "\n\nFine I'll do it.\n";
	else
		std::cout << "\n\nThanks bud.\n";
	return (0);
}