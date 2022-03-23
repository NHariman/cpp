/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 15:30:03 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/23 09:44:36 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(Intern const & obj);
		Intern&	operator=(Intern const &obj);
		Form*	makeForm(std::string formName, std::string targetName);
};

#endif