/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   run_intern_tests.cpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:42:26 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/22 16:56:57 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/TestHeader.hpp"
#include "../inc/Bureaucrat.hpp"
#include "../inc/Intern.hpp"

void	run_intern_tests()
{
	Intern SomeRandomIntern;
	Form	*rrf;

	rrf = SomeRandomIntern.makeForm("robotomy request", "Bender");

	delete rrf;
}