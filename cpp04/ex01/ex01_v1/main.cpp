/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: niks <niks@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 15:24:20 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/11 20:51:44 by nhariman      ########   odam.nl         */
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

	Animal* animal[4]; // make a 2d array of Animals
	// Animal	*test = new Dog();
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 1)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}
	
	for (int i = 0; i < 4; i++)
	{
		animal[i]->makeSound();
	}

	// std::cout << "assigning thoughts to brain of animals[0]" << std::endl;
	// animals[0].setIdeas(0, "test");
	// animals[0].getBrain()->ideas[1] = "hello";
	// animals[0].setIdeas(2, "bla");
	// std::cout << "view thoughts of animals[0]" << std::endl;
	// std::cout << animals[0].getIdeas(0) << std::endl;
	// std::cout << animals[0].getIdeas(1) << std::endl;
	// std::cout << animals[0].getBrain()->ideas[2] << std::endl;
	// std::cout << "Copy animals[0] into animals[2]" << std::endl;
	// animals[2] = animals[0];

	// std::cout << "view idea[1] of Animal[2] and Animal[0]" << std::endl;
	// std::cout << "Type of animal[0]: " << animals[0].getType() << std::endl;
	// std::cout << "Type of animal[2]: " << animals[2].getType() << std::endl;
	// std::cout << "Animal[2]: " << animals[2].getIdeas(1) << std::endl;
	// std::cout << "Animal[0]: " << animals[0].getIdeas(1) << std::endl;


	std::cout << "assigning thoughts to brain of animals[0]" << std::endl;
	animal[0]->setIdeas(0, "test");
	animal[0]->getBrain()->ideas[1] = "hello";
	animal[0]->setIdeas(2, "bla");
	std::cout << "view thoughts of animals[0]" << std::endl;
	std::cout << animal[0]->getIdeas(0) << std::endl;
	std::cout << animal[0]->getIdeas(1) << std::endl;
	std::cout << animal[0]->getBrain()->ideas[2] << std::endl;
	std::cout << "Copy animals[0] into animals[2]" << std::endl;
	animal[2] = animal[0];

	std::cout << "view idea[1] of Animal[2] and Animal[0]" << std::endl;
	std::cout << "Type of animal[0]: " << animal[0]->getType() << std::endl;
	std::cout << "Type of animal[2]: " << animal[2]->getType() << std::endl;
	std::cout << "Animal[2]: " << animal[2]->getIdeas(1) << std::endl;
	std::cout << "Animal[0]: " << animal[0]->getIdeas(1) << std::endl;

	// animals[2]->getBrain()->ideas[0] = animals[0]->getBrain()->ideas[0] ;
	// std::cout << "new testing " << animals[2]->getIdeas(0) << std::endl;
	// std::cout << animals[0]->getIdeas(1) << std::endl;

	// std::cout << "assigning animals[0] to new variable test" << std::endl;
	// test = animals[0];
	// std::cout << "idea[0] in Test: " << test->getIdeas(0) << std::endl;
	// std::cout << "idea[0] in animals[0]:" << std::endl;
	// std::cout << animals[0]->getIdeas(0) << std::endl;

	// animals[4]->setIdeas(0, "test");
	// animals[4]->getBrain()->ideas[1] = "hello";
	// animals[4]->setIdeas(2, "bla");
	// std::cout << "assigning animals[4] to variable test" << std::endl;
	// test = animals[4];
	// std::cout << "idea[0] in Test: " << test->getIdeas(0) << std::endl;
	// std::cout << "idea[0] in animals[0]:" << std::endl;
	// std::cout << animals[4]->getIdeas(0) << std::endl;

	for (int i = 0; i < 4; i++)
	{
		delete animal[i];
	}
	delete j;
	delete l;
	return (0);
}