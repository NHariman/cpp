/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:24:20 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/17 16:07:58 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int		main(void)
{
	// std::cout << "=====BASIC TESTING=====" << std::endl;
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound();
	// j->makeSound();

	// delete j;
	// delete i;

	std::cout << "=====ARRAY OF ANIMALS=====" << std::endl;

	Animal	*farm[4];

	for(int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			farm[i] = new Cat();
		else
			farm[i] = new Dog();
	}

	// making getBrain() a pure virtual function in Animal
	// allows it to be used when an animal array is created as then
	// it uses the derived classes getBrain()
	// because Animal is a virtual base class it cannot be
	// instantiated right off the bat too, only via a pointer
	// when copying over an Animal[0] to Animal[2] (both are Cats)
	// you cannot copy over everything as it will consider them to be
	// of class Animal, not a true Cat.
	// so you can only copy over the _type of the Animal
	// the _brain would have to be copied over using a setBrain function
	// which can also be a pure virtual function
	// however for this assignment it was not implemented
	farm[0]->getBrain()->ideas[0] = "Scratch.";
	farm[0]->getBrain()->ideas[1] = "Chase mouse!";
	farm[0]->getBrain()->ideas[2] = "Cry about food!";

	std::cout << "Farm[0]: " << farm[0]->getType() << " is firstly thinking (ideas[0]) about: " << farm[0]->getBrain()->ideas[0] << std::endl;
	std::cout << "Farm[0]: " << farm[0]->getType() << " is secondly thinking (ideas[1]) about: " << farm[0]->getBrain()->ideas[1] << std::endl;
	std::cout << "Farm[0]: " << farm[0]->getType() << " is thirdly thinking (ideas[2]) about: " << farm[0]->getBrain()->ideas[2] << std::endl;
	for(int i = 0; i < 4; i++)
		delete farm[i];

	std::cout << "=====COPY TESTING=====" << std::endl;
	std::cout << "=====CAT=====" << std::endl;

	// in this case, Kitty and copycat are pure cats
	// and so everything can be copied over. same goes for dog.
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

	std::cout << "kit is firstly thinking (ideas[0]) about: " << kit->getBrain()->ideas[0] << std::endl;
	std::cout << "kit is secondly thinking (ideas[1]) about: " << kit->getBrain()->ideas[1] << std::endl;
	std::cout << "kit is thirdly thinking (ideas[2]) about: " << kit->getBrain()->ideas[2] << std::endl;
	
	Cat *copykit = new Cat(*kit);
	std::cout << "copykit is firstly thinking (ideas[0]) about: " << copykit->getBrain()->ideas[0] << std::endl;
	std::cout << "copykit is secondly thinking (ideas[1]) about: " << copykit->getBrain()->ideas[1] << std::endl;
	std::cout << "copykit is thirdly thinking (ideas[2]) about: " << copykit->getBrain()->ideas[2] << std::endl;

	std::cout << "memory address comparing" << std::endl;
	std::cout << "kit ideas[0] on address: "	<< &kit->getBrain()->ideas[0] << std::endl;
	std::cout << "copykit ideas[0] on address: " << &copykit->getBrain()->ideas[0] << std::endl;

	delete kit;
	delete copykit;

	std::cout << "=====new DOG=====" << std::endl;
	Dog	*pup = new Dog();

	pup->getBrain()->ideas[0] = "sleep.";
	pup->getBrain()->ideas[1] = "Chase ball!";
	pup->getBrain()->ideas[2] = "HOWLLLLL!";

	std::cout << "pup is firstly thinking (ideas[0]) about: " << pup->getBrain()->ideas[0] << std::endl;
	std::cout << "pup is secondly thinking (ideas[1]) about: " << pup->getBrain()->ideas[1] << std::endl;
	std::cout << "pup is thirdly thinking (ideas[2]) about: " << pup->getBrain()->ideas[2] << std::endl;
	
	Dog *copydog = new Dog(*pup);
	std::cout << "copydog is firstly thinking (ideas[0]) about: " << copydog->getBrain()->ideas[0] << std::endl;
	std::cout << "copydog is secondly thinking (ideas[1]) about: " << copydog->getBrain()->ideas[1] << std::endl;
	std::cout << "copydog is thirdly thinking (ideas[2]) about: " << copydog->getBrain()->ideas[2] << std::endl;

	std::cout << "memory address comparing" << std::endl;
	std::cout << "pup ideas[0] on address: "	<< &pup->getBrain()->ideas[0] << std::endl;
	std::cout << "copydog ideas[0] on address: " << &copydog->getBrain()->ideas[0] << std::endl;

	delete pup;
	delete copydog;
	//uncomment this for leaks check:
	//while(1){;}
	return (0);
}