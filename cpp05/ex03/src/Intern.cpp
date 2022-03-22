/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 15:35:44 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/22 17:02:55 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"
#include <algorithm>

Intern::Intern()
{
	std::cout << "An Intern has been made" << std::endl;
}

Intern::~Intern()
{
	std::cout << "The Intern has been fired" << std::endl;
}

Intern::Intern(Intern const &obj)
{
	*this = obj;
	std::cout << "An Intern has been copied" << std::endl;
}

Intern&	Intern::operator=(Intern const &obj)
{
	*this = obj;
	std::cout << "An Intern has been copied via assignment" << std::endl;
	return (*this);
}

Form*	makeForm(std::string formName, std::string targetName)
{
	const std::string	forms[] = { "robotomy form", "presidential pardon form", "shrubbery request form"};

	Form *tmp;

	const int	form = std::find(forms, forms + 4, formName) - forms;
	if (form >= 0 && form <= 2)
		std::cout << "The intern has created: " << formName << std::endl;
	switch(form)
	{
		case 0:
		{
			tmp = new RobotomyRequestForm(targetName);
			break ;
		}
		case 1:
		{
			tmp = new PresidentialPardonForm(targetName);
			break ;
		}
		case 2:
		{
			tmp = new ShrubberyCreationForm(targetName);
			break ;
		}
		default:
		{
			std::cerr << "The Intern cries: The Form requested does not exist!" << std::endl;
			return(NULL);
		}
	}
	return (tmp);
}
