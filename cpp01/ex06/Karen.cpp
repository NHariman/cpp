/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 14:40:49 by nhariman      #+#    #+#                 */
/*   Updated: 2021/11/03 17:18:12 by nhariman      ########   odam.nl         */
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
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void		Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void		Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void		Karen::complain(std::string level)
{
	void (Karen::*karenptr[])() = {	&Karen::debug, 
									&Karen::info,
									&Karen::warning,
									&Karen::error};
	const std::string	levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};


	int	complaint = std::find(levels, levels + 4, level) - levels;
	if (complaint < 0 || complaint > 3)
		std::cout << "Undefined Level" << std::endl;
	else
		(this->*karenptr[complaint])();
}
