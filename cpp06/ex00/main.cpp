/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 15:28:51 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/06 22:20:57 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Conversions.hpp"
#include <iostream>
#include <string>
#include <locale>

// char, int, float, double

int		input_validation(char *input, int *float_check)
{
	char *tmp;
	double d = strtod(input, &tmp);
	std::locale loc;
	std::string str(tmp);
	std::string::size_type i = 0;
	if (str[i] == 'f')
	{
		*float_check = 1;
		i++;
	}
	while (i < str.length() && (!std::isalnum(str[i])))
		i++;
	if (str.length() == i)
		return (0);
	return (1);
}

int		main(int ac, char **av)
{
	int float_check = 0;
	if (ac < 2 || ac > 2 || input_validation(av[1], &float_check))
	{
		std::cerr << "Wrong input detected. Can only convert one scalar type at a time." << std::endl;
		return (0);
	}
	Conversions result;
	if (float_check)
		result = fromFloat(av[1]);
	else
	{
		// oh god okay just do max >= result >= int min int
		// same for double
		// check if char????? somehow??
	}
	std::string input(av[1]);
	std::cout << input << std::endl;
	std::cout << input.length() << std::endl;

	

	return (0);
}