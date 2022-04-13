/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/13 17:30:13 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/13 20:54:30 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "inc/Base.hpp"
#include "inc/A.hpp"
#include "inc/B.hpp"
#include "inc/C.hpp"

int		main(void)
{
	Base*	test;

	std::cout << "10 cases will be generated." << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "~~~Test case: " << i + 1 << "~~~" << std::endl;
		test = generate();
		std::cout << std::endl;
		identify(test);
		std::cout << std::endl;
		identify(*test);
		std::cout << "~~~~~~~" << std::endl;
		delete test;
	}
}