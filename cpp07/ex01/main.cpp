/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/13 21:59:18 by nhariman      #+#    #+#                 */
/*   Updated: 2022/05/26 17:43:30 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "inc/iter.hpp"
#include "inc/printContent.hpp"

#include <iostream>

// the tester users a const when printing!
static void	print_str(std::string str)
{
	std::cout << str << std::endl;
}

static int	print_nb(int nb)
{
	std::cout << nb << std::endl;
	return nb;
}

/*
	https://www.learncpp.com/cpp-tutorial/function-template-instantiation/
	on template instantiation
*/

int		main(void)
{
	std::cout << "Printing a string of colours:" << std::endl;
	std::string colour[4] = { "Blue", "Red", "Purple", "Pink" };
	::iter(colour, 4, &print_str);

	std::cout << "Printing a string of ints:" << std::endl;
	int number[4] = { 0, 1, 2, 3 };
	::iter(number, 4, &print_nb);

	std::cout << "Printing a string of colours via instantiated template printContent:" << std::endl;
	::iter(colour, 4, &::printContent<std::string>);
	std::cout << "Printing a string of numbers via instantiated template printContent:" << std::endl;
	::iter(number, 4, &::printContent<int>);
}
