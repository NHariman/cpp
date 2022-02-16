/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 18:22:20 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/16 18:27:39 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain Constructor has been called." << std::endl;
}

Brain::Brain(const Brain& obj)
{
	*this = obj;
	std::cout << "Copy constructor has been called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Default Brain destructor has been called." << std::endl;
}

Brain&	Brain::operator=(const Brain& obj)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];
	std::cout << "Brain assignation operator overload has been called." << std::endl;
	return *this;
}
