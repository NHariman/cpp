/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 17:23:26 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/19 19:16:38 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain has been initialised" << std::endl;
}

Brain::Brain(Brain& obj)
{
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = obj.ideas[i];
	}
	std::cout << "ideas has been copied over" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain has been deleted" << std::endl;
}

std::string* Brain::getIdeas()
{
	return this->ideas;
}
