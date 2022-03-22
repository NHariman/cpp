/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/21 16:52:47 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/21 21:01:45 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/Form.hpp"
#include "../inc/Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", 72, 45)
{ 	
	std::cout << "A shrubbery form for at: " << "TARGET UNDEFINED" << " has been created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : \
							Form(target + " Robotomy Request Form", 72, 45), _target(target)
{
	std::cout << "A Robotomy form for at: " << target << " has been created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{ 	
	std::cout << "Robotomy Form: " << this->_target << " has been destroyed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : Form(obj)
{
	this->_target = obj.getTarget();
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	this->Form::operator=(obj); // uses the Form assignment constructor
	this->_target = obj.getTarget();
	return (*this);
}

std::string		RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeExec())
		throw Form::GradeTooLowException();
	else if (this->getSignature() == 0)
		throw Form::UnsignedFormException();
	else
	{
		std::cout << "<BRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR>" << std::endl;
		if (rand() % 100 >= 50)
			std::cout << "Ah yes, the Robotomy of " << executor.getName() << " seems to have succeeded." << std::endl;
		else
			std::cout << "Hmmm, the Robotomy of " << executor.getName() << " seems to have failed." << std::endl;
	}
}
