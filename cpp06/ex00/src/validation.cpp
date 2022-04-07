/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   validation.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/07 19:42:54 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/07 22:12:49 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/convert.hpp"

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

int		double_check(std::string input)
{
	char *tmp;
	double d = strtod(input.c_str(), &tmp); // also handles nan, inf etc.
	std::size_t	dot = input.find('.');
	std::size_t e = input.find('e');
	std::size_t cap_e = input.find('E');
	if ((dot != std::string::npos || e != std::string::npos || cap_e != std::string::npos) && d != 0.0)
		return (1);
	return (0);
}

int		int_check(std::string input)
{
	std::locale loc;
	std::string::size_type i = 0;
	
	while (i < input.length() && (std::isdigit(input[i])))
		i++;
	if (input.length() == i)
		return (1);
	return (0);
}

int		char_check(std::string input)
{
	if (input.length() == 1)
		return (1);
	return (0);
}