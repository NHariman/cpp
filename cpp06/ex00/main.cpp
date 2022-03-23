/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 15:28:51 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/23 21:44:22 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ToLiteral.hpp"
#include <iostream>
#include <string>

// char, int, float, double

int		main(int ac, char **av)
{
	if (ac < 2 || ac > 3)
	{
		std::cerr << "Wrong input detected. Can only convert one scalar type at a time." << std::endl;
		return (0);
	}
	std::string input(av[1]);
	std::cout << input << std::endl;
	std::cout << input.length() << std::endl;

	return (0);
}