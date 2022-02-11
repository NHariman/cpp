/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: niks <niks@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 17:23:26 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/11 18:06:41 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain has been initialised" << std::endl;
}

Brain::Brain(const Brain& obj)
{
	*this = obj;
	std::cout << "ideas has been copied over" << std::endl;
}

Brain&	Brain::operator=(Brain const &obj)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];
	std::cout << "ideas has been copied over" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain has been deleted" << std::endl;
}
