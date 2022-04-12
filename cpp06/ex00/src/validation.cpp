/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   validation.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/07 19:42:54 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/12 18:12:55 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/convert.hpp"
#include <limits.h>

int		input_validation(std::string input, char *suffix_check)
{
	char *tmp;
	double d = strtod(input.c_str(), &tmp);
	std::locale loc;
	std::string	end(tmp);
	std::string::size_type i = 0;
	if (d == 0.0 && input.length() == 1)
		return (0);
	if (end[i] == 'l' || end[i] == 'L')
	{
		std::cerr << "long doubles not supported." << std::endl;
		return (1);
	}
	if (end[i] == 'f' || end[i] == 'F')
	{
		*suffix_check = end[i];
		i++;
	}
	while (i < end.length() && (std::isspace(end[i])))
		i++;
	if (end.length() == i)
		return (0);
	return (1);
}

int		int_check(std::string input)
{
	std::locale loc;
	std::string::size_type i = 0;

	double d = strtod(input.c_str(), NULL);
	while (i < input.length() && (std::isdigit(input[i])))
		i++;
	if (input.length() == i && d <= INT_MAX && d >= INT_MIN)
		return (1);
	return (0);
}

int		char_check(std::string input)
{
	if (input.length() == 1)
		return (1);
	return (0);
}