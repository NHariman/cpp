/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 17:23:26 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/26 18:51:57 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain has been initialised" << std::endl;
}

Brain::Brain(Brain& obj)
{
	*this = obj;
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
