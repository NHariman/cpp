/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   run_intern_tests.cpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:42:26 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/23 10:07:18 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/TestHeader.hpp"
#include "../inc/Bureaucrat.hpp"
#include "../inc/Intern.hpp"
#include "../inc/Form.hpp"

void	run_intern_tests()
{
	Intern SomeRandomIntern;
	Form	*rrf[4];

	rrf[0] = SomeRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf[0] << std::endl;
	rrf[1] = SomeRandomIntern.makeForm("presidential pardon", "Willie");
	std::cout << *rrf[1] << std::endl;
	rrf[2] = SomeRandomIntern.makeForm("shrubbery creation", "Gaia");
	std::cout << *rrf[2] << std::endl;
	rrf[3] = SomeRandomIntern.makeForm("fake form", "Bender");

	for (int i = 0; i < 4; i++)
		delete rrf[i];
}