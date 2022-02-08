/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niks <niks@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:23:26 by nhariman          #+#    #+#             */
/*   Updated: 2022/01/27 17:19:40 by niks             ###   ########.fr       */
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
