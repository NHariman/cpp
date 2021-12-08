/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 14:40:49 by nhariman      #+#    #+#                 */
/*   Updated: 2021/12/08 21:51:29 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(){}

Karen::~Karen(){}

void		Karen::debug(void)
{
	std::cout << "Debugging is my absolute favourite thing to do, I just love fixing problems :))))" << std::endl;
}

void		Karen::info(void)
{
	std::cout << "The code is so ugly and incomprehensible!! If you taught people how to code better we wouldn't be in this situation!!!!" << std::endl;
}

void		Karen::warning(void)
{
	std::cout << "I think someone should do this work for me, because it's really not my fault my code is so bad! I learnt it wrong from here!!" << std::endl;
}

void		Karen::error(void)
{
	std::cout << "It is absolutely ridiculous that I have to be responsible for my own actions, I'm contacting staff." << std::endl;
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
