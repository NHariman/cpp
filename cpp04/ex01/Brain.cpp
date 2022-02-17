/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 18:22:20 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/17 15:22:19 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "colours.hpp"

Brain::Brain()
{
	std::cout << B_YELLOW << "BRAIN DEFAULT CONSTRUCTOR." << B_END << std::endl;
}

Brain::Brain(const Brain& obj)
{
	*this = obj;
	std::cout << B_YELLOW << "BRAIN COPY CONSTRUCTOR." << B_END << std::endl;
}

Brain::~Brain()
{
	std::cout << B_YELLOWB << "BRAIN DESTRUCTOR." << B_END << std::endl;
}

Brain&	Brain::operator=(const Brain& obj)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];
	std::cout << B_YELLOW << "BRAIN ASSIGNATION OVERLOAD" << B_END << std::endl;
	return *this;
}
