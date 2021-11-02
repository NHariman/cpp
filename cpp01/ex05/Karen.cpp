/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 14:40:49 by nhariman      #+#    #+#                 */
/*   Updated: 2021/11/02 15:02:37 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(){}

Karen::~Karen(){}

void		Karen::debug(void)
{
	std::cout << "I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void		Karen::info(void)
{
	std::cout << "I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void		Karen::warning(void)
{
	std::cout << " think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void		Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

static void		(*karenptr[])() = {
	Karen::debug,
	Karen::info,
	Karen::warning,
	Karen::error
};

void		Karen::complain(std::string level)
{
	int		lvl;

	lvl = std::atol(level.std::string::c_str());
	(*karenptr[lvl])();
}
