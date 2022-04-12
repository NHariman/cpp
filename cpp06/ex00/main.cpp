/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 15:28:51 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/12 18:06:06 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Conversions.hpp"
#include "inc/convert.hpp"

// char, int, float, double

int		main(int ac, char **av)
{
	char suffix_check;
	std::string input(av[1]);
	if (ac < 2 || ac > 2 || input_validation(input, &suffix_check))
	{
		std::cerr << "Wrong input detected. Can only convert one scalar type at a time." << std::endl;
		return (0);
	}
	Conversions result;
	if (suffix_check == 'f' || suffix_check == 'F')
		result = fromFloat(av[1]); // std::cout << "Float time" << std::endl; // result = fromFloat(av[1]);
	else if (int_check(input))
		result = fromInt(av[1]); // std::cout << "int time" << std::endl; // result = fromInt(av[1]);
	else if (char_check(input))
		result = fromChar(av[1]); // std::cout << "char time" << std::endl; // result = fromChar(av[1]);
	else
		result = fromDouble(av[1]); // std::cout << "Double time" << std::endl; // result = fromDouble(av[1]);
	std::cout << result << std::endl;
	return (0);
}