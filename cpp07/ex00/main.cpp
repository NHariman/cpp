/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/13 21:04:27 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/13 21:41:56 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "inc/Max.hpp"
#include "inc/Min.hpp"
#include "inc/Swap.hpp"

/*
	this exercise is all about templates
	https://www.cplusplus.com/doc/oldtutorial/templates/
	templates operate as generic types and allows for creation
	of functions whose functionality can be adapted to more than one
	type or class without having to repeat the entire code for each type.
*/

int		main(void)
{
	int a = 2;
	int b = 3;

	::swap( a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}