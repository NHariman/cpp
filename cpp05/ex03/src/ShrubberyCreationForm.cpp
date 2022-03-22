/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/21 16:53:10 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/21 20:26:32 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/Form.hpp"
#include "../inc/Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation Form", 145, 137)
{ 	
	std::cout << "A shrubbery form for at: " << "TARGET UNDEFINED" << " has been created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : \
							Form(target + " Shrubbery Creation Form", 145, 137), _target(target)
{
	std::cout << "A shrubbery form for at: " << target << " has been created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{ 	
	std::cout << "Shrubbery Creation Form: " << this->_target << " has been destroyed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : Form(obj)
{
	this->_target = obj.getTarget();
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	this->Form::operator=(obj); // uses the Form assignment constructor
	this->_target = obj.getTarget();
	return (*this);
}

std::string		ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeExec())
		throw Form::GradeTooLowException();
	else if (this->getSignature() == 0)
		throw Form::UnsignedFormException();
	else
	{
		std::string f = this->_target + "_shrubbery";
		std::ofstream newfile(f);

		if (newfile.is_open())
		{
			newfile << "               ,@@@@@@@,\n       ,,,.   ,@@@@@@/@@,  .oo8888o.\n    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n   `&%\\ ` /%&'    |.|        \\ '|8'\n       |o|        | |         | |\n       |.|        | |         | |\njgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";
			newfile.close();
			return ;
		}
		else
			std::cout << "Error, unable to write to file\n";
	}
}

