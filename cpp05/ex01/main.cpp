/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhariman <nhariman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:52:15 by nhariman          #+#    #+#             */
/*   Updated: 2022/03/18 18:55:30 by nhariman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "TestHeader.hpp"
#include "Form.hpp"
#include "colours.hpp"
#include <cstdlib>
#include <strings.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "This main takes arguments:\n- Write 1 for Bureaucrat tests\n" << \
		"- Write 2 for Form tests\n" << \
		"- Write 3 for All tests (first Bureaucrat, then Form)" << std::endl;
	}
	else if (!strcmp(av[1], "1"))
		run_bureaucrat_tests();
	else if (!strcmp(av[1], "2"))
		run_form_tests();
	else if (!strcmp(av[1], "3"))
	{
		run_bureaucrat_tests();
		std::cout << std::endl;
		run_form_tests();
	}
	else
		std::cerr << "Invalid arguments" << std::endl;
	return (0);
}
