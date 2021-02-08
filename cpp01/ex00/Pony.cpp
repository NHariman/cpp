/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 21:49:02 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/08 15:18:34 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

// help https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/

Pony::Pony(std::string name, std::string mane, std::string eyes, std::string coat, std::string breed, int height, int weight) : _name(name), _mane(mane), _eyes(eyes), _coat(coat), _breed(breed), _height(height), _weight(weight)
{
	std::cout << "You just adopted a " << this->_breed << " named " << this->_name << "!" << std::endl;
	std::cout << this->_name << " has a " << this->_mane << " coloured mane and " << \
	this->_eyes << " eyes." << std::endl;
	std::cout << this->_name << "\'s coat is a glossy " << this->_coat << " and " << this->_name << " weighs " << this->_weight << "kg and is " << this->_height << "cm tall." << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Oh no! " << this->_name << " died :(" << std::endl;
}

std::string Pony::get_name(void)
{
	return this->_name;
}

std::string Pony::get_mane(void)
{
	return this->_mane;
}

std::string Pony::get_eyes(void)
{
	return this->_eyes;
}

std::string Pony::get_coat(void)
{
	return this->_coat;
}

std::string Pony::get_breed(void)
{
	return this->_breed;
}

int Pony::get_weight(void)
{
	return this->_weight;
}

int Pony::get_height(void)
{
	return this->_height;
}

void PonyOnTheHeap()
{
	std::cout << "~^~~^~~^~~^~~^~~^~~^~~^~~^~~^~~^~~^~~^~~^~" << std::endl;
	std::cout << "Welcome to The Heap!" << std::endl;
	std::cout << "~^~~^~~^~~^~~^~~^~~^~~^~~^~~^~~^~~^~~^~~^~" << std::endl;
	std::cout << "Your Main pony had to stay home so, here's a pony from The Heap you can borrow:\n" << std::endl;

	Pony *baby = new Pony("Baby", "black", "brown", "black", "dartmore", 145, 56);

	std::cout << "\n\n";
	std::cout << "Let's do some stuff on The Heap!" << std::endl;
	std::cout << "You combed " << baby->get_name() << "\'s " << baby->get_mane() << " mane." << std::endl;
	std::cout << "You pet " << baby->get_name() << "\'s " << baby->get_coat() << " glossy coat." << std::endl;
	std::cout << baby->get_name() << " weighs " << baby->get_weight() << "kg of pure Pony Power. And stands " << baby->get_height() << "cm tall like the majestic steed they are." << std::endl;
	std::cout << "You wonder if there are other " << baby->get_breed() << "\'s out there, but surely yours is the best." << std::endl;
	std::cout << "\n\n\n";
	std::cout << "It's time to go! Say goodbye to " << baby->get_name() << "!" << std::endl;
	delete baby;
	return ;
}

void PonyOnTheStack()
{
	std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~" << std::endl;
	std::cout << "Welcome to The Stack!" << std::endl;
	std::cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~" << std::endl;
	std::cout << "Your main pony had to stay home so, here's a pony from The Stack you can borrow:" << std::endl;

	Pony baby = Pony("Honey", "blond", "blue", "tan", "shetland", 140, 50);

	std::cout << "\n\n";
	std::cout << "Let's do some stuff on The Stack!" << std::endl;
	std::cout << "You combed " << baby.get_name() << "\'s " << baby.get_mane() << " mane." << std::endl;
	std::cout << "You pet " << baby.get_name() << "\'s " << baby.get_coat() << " soft coat. It's very nice." << std::endl;
	std::cout << baby.get_name() << " weighs " << baby.get_weight() << "kg of pure Pony. And stands " << baby.get_height() << "cm tall like the majestic steed they are." << std::endl;
	std::cout << "You wonder if there are other " << baby.get_breed() << "\'s out there, are they just as pretty?" << std::endl;
	std::cout << "\n\n\n";
	std::cout << "It's time to go! Say goodbye to " << baby.get_name() << "!" << std::endl;
	return;
}
