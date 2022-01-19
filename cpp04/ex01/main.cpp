/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:24:20 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/19 19:18:38 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

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

	Animal*	animals = new Animal[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 1)
			animals[i] = *j;
		else
			animals[i] = *l;
	}
	
	for (int i = 0; i < 10; i++)
	{
		animals[i].makeSound();
	}

	delete [] animals;
	delete meta;
	delete j;
	delete l;
	delete k;
	return (0);
}