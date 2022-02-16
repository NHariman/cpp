/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:24:20 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/16 22:06:20 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	Animal	*farm[4];

	for(int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			farm[i] = new Cat();
		else
			farm[i] = new Dog();
	}

	farm[0]->getBrain()->ideas[0] = "Scratch.";
	farm[0]->getBrain()->ideas[1] = "Chase mouse!";
	farm[0]->getBrain()->ideas[2] = "Cry about food!";

	std::cout << "Farm[0]: " << farm[0]->getType() << " is firstly thinking (ideas[0]) about: " << farm[0]->getBrain()->ideas[0] << std::endl;
	std::cout << "Farm[0]: " << farm[0]->getType() << " is secondly thinking (ideas[1]) about: " << farm[0]->getBrain()->ideas[1] << std::endl;
	std::cout << "Farm[0]: " << farm[0]->getType() << " is thirdly thinking (ideas[2]) about: " << farm[0]->getBrain()->ideas[2] << std::endl;
	for(int i = 0; i < 4; i++)
		delete farm[i];

	std::cout << "Copy testing." << std::endl;
	std::cout << "=====CAT=====" << std::endl;
	Cat	kitty = Cat();

	kitty.getBrain()->ideas[0] = "Scratch.";
	kitty.getBrain()->ideas[1] = "Chase mouse!";
	kitty.getBrain()->ideas[2] = "Cry about food!";

	std::cout << "kitty is firstly thinking (ideas[0]) about: " << kitty.getBrain()->ideas[0] << std::endl;
	std::cout << "kitty is secondly thinking (ideas[1]) about: " << kitty.getBrain()->ideas[1] << std::endl;
	std::cout << "kitty is thirdly thinking (ideas[2]) about: " << kitty.getBrain()->ideas[2] << std::endl;
	
	Cat copycat = Cat(kitty);
	std::cout << "copycat is firstly thinking (ideas[0]) about: " << copycat.getBrain()->ideas[0] << std::endl;
	std::cout << "copycat is secondly thinking (ideas[1]) about: " << copycat.getBrain()->ideas[1] << std::endl;
	std::cout << "copycat is thirdly thinking (ideas[2]) about: " << copycat.getBrain()->ideas[2] << std::endl;

	std::cout << "memory address comparing" << std::endl;
	std::cout << "Kitty ideas[0] on address: "	<< &kitty.getBrain()->ideas[0] << std::endl;
	std::cout << "copycat ideas[0] on address: " << &copycat.getBrain()->ideas[0] << std::endl;

	std::cout << "=====DOG=====" << std::endl;
	Dog	puppy = Dog();

	puppy.getBrain()->ideas[0] = "sleep.";
	puppy.getBrain()->ideas[1] = "Chase ball!";
	puppy.getBrain()->ideas[2] = "HOWLLLLL!";

	std::cout << "puppy is firstly thinking (ideas[0]) about: " << puppy.getBrain()->ideas[0] << std::endl;
	std::cout << "puppy is secondly thinking (ideas[1]) about: " << puppy.getBrain()->ideas[1] << std::endl;
	std::cout << "puppy is thirdly thinking (ideas[2]) about: " << puppy.getBrain()->ideas[2] << std::endl;
	
	Dog rogerdog = Dog(puppy);
	std::cout << "rogerdog is firstly thinking (ideas[0]) about: " << rogerdog.getBrain()->ideas[0] << std::endl;
	std::cout << "rogerdog is secondly thinking (ideas[1]) about: " << rogerdog.getBrain()->ideas[1] << std::endl;
	std::cout << "rogerdog is thirdly thinking (ideas[2]) about: " << rogerdog.getBrain()->ideas[2] << std::endl;

	std::cout << "memory address comparing" << std::endl;
	std::cout << "puppy ideas[0] on address: "	<< &puppy.getBrain()->ideas[0] << std::endl;
	std::cout << "rogerdog ideas[0] on address: " << &rogerdog.getBrain()->ideas[0] << std::endl;

	std::cout << "=====new CAT=====" << std::endl;

	Cat	*kit = new Cat();

	kit->getBrain()->ideas[0] = "Scratch.";
	kit->getBrain()->ideas[1] = "Chase mouse!";
	kit->getBrain()->ideas[2] = "Cry about food!";

	std::cout << "kit is firstly thinking (ideas[0]) about: " << kit.getBrain()->ideas[0] << std::endl;
	std::cout << "kit is secondly thinking (ideas[1]) about: " << kit.getBrain()->ideas[1] << std::endl;
	std::cout << "kit is thirdly thinking (ideas[2]) about: " << kit.getBrain()->ideas[2] << std::endl;
	
	Cat *copykit = new Cat(kit);
	std::cout << "copykit is firstly thinking (ideas[0]) about: " << copykit.getBrain()->ideas[0] << std::endl;
	std::cout << "copykit is secondly thinking (ideas[1]) about: " << copykit.getBrain()->ideas[1] << std::endl;
	std::cout << "copykit is thirdly thinking (ideas[2]) about: " << copykit.getBrain()->ideas[2] << std::endl;

	std::cout << "memory address comparing" << std::endl;
	std::cout << "kit ideas[0] on address: "	<< &kit.getBrain()->ideas[0] << std::endl;
	std::cout << "copykit ideas[0] on address: " << &copykit.getBrain()->ideas[0] << std::endl;

	std::cout << "=====new DOG=====" << std::endl;
	Dog	puppy = Dog();

	puppy.getBrain()->ideas[0] = "sleep.";
	puppy.getBrain()->ideas[1] = "Chase ball!";
	puppy.getBrain()->ideas[2] = "HOWLLLLL!";

	std::cout << "puppy is firstly thinking (ideas[0]) about: " << puppy.getBrain()->ideas[0] << std::endl;
	std::cout << "puppy is secondly thinking (ideas[1]) about: " << puppy.getBrain()->ideas[1] << std::endl;
	std::cout << "puppy is thirdly thinking (ideas[2]) about: " << puppy.getBrain()->ideas[2] << std::endl;
	
	Dog rogerdog = Dog(puppy);
	std::cout << "rogerdog is firstly thinking (ideas[0]) about: " << rogerdog.getBrain()->ideas[0] << std::endl;
	std::cout << "rogerdog is secondly thinking (ideas[1]) about: " << rogerdog.getBrain()->ideas[1] << std::endl;
	std::cout << "rogerdog is thirdly thinking (ideas[2]) about: " << rogerdog.getBrain()->ideas[2] << std::endl;

	std::cout << "memory address comparing" << std::endl;
	std::cout << "puppy ideas[0] on address: "	<< &puppy.getBrain()->ideas[0] << std::endl;
	std::cout << "rogerdog ideas[0] on address: " << &rogerdog.getBrain()->ideas[0] << std::endl;

	delete j;
	delete i;
	delete kit;
	delete copykit;
	return (0);
}