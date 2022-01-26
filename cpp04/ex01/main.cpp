/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:24:20 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/26 19:04:43 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

// TODO: still needs to show ideas can be added
// TODO: make sure ideas can be added, add copy overload

int		main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* l = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	l->makeSound();
	j->makeSound();
	meta->makeSound();

	//because k doesn't use virtual, it uses the base class makeSound()
	const WrongAnimal* k = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();

	Animal *animals[10]; // make a 2d array of Animals
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 1)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	
	for (int i = 0; i < 10; i++)
	{
		animals[i]->makeSound();
	}

	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	delete meta;
	delete j;
	delete l;
	delete k;
	return (0);
}