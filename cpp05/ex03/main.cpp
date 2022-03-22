/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/02 13:52:15 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/22 16:58:11 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"
#include "inc/TestHeader.hpp"
#include "inc/Form.hpp"
#include "inc/colours.hpp"
#include <cstdlib>
#include <strings.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "This main takes arguments:\n- Write 1 for Bureaucrat tests\n" << \
		"- Write 2 for Shrubbery tests\n" << \
		"- Write 3 for Robotomy tests\n" << \
		"- Write 4 for Presidential Pardon tests\n" << \
		"- Write 5 for All new Form tests\n" << \
		"- Write 6 for Intern tests\n" << \
		"- Write 0 for All tests in descending order" << std::endl;
	}
	else if (!strcmp(av[1], "1"))
		run_bureaucrat_tests();
	// else if (!strcmp(av[1], "2"))
	// 	run_form_tests();
	else if (!strcmp(av[1], "2"))
		run_shrubbery_tests();
	else if (!strcmp(av[1], "3"))
		run_robotomy_tests();
	else if (!strcmp(av[1], "4"))
		run_pardon_tests();
	else if (!strcmp(av[1], "5"))
	{
		run_shrubbery_tests();
		run_robotomy_tests();
		run_pardon_tests();
	}
	else if (!strcmp(av[1], "6"))
		run_intern_tests();
	else if (!strcmp(av[1], "0"))
	{
		run_bureaucrat_tests();
		std::cout << std::endl;
		//run_form_tests(); // cannot be run anymore due to it being a virtual class
		run_shrubbery_tests();
		run_robotomy_tests();
		run_pardon_tests();
		run_intern_tests();
	}
	else
		std::cerr << "Invalid arguments" << std::endl;
	return (0);
}
