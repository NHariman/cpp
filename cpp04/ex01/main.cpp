/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: niks <niks@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:24:20 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/09 17:40:46 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

// TODO: still needs to show ideas can be added
// still have no idea how to retrieve or input ideas

int		main(void)
{
	const Animal* j = new Dog();
	const Animal* l = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	l->makeSound();
	j->makeSound();

	Animal** animals = new Animal*[10]; // make a 2d array of Animals
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

	animals[0]->setIdeas(0, "test");
	std::cout << animals[0]->getIdeas(0) << std::endl;
	std::cout << animals[0]->getBrain()->ideas[0] << std::endl;
	animals[2] = animals[0];
	std::cout << animals[2]->getIdeas(0) << std::endl;	

	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	delete j;
	delete l;
	return (0);
}