/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/21 16:43:47 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/21 21:05:31 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/Form.hpp"
#include "../inc/Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", 25, 5)
{ 	
	std::cout << "A shrubbery form for at: " << "TARGET UNDEFINED" << " has been created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : \
							Form(target + " Presidential Pardon Form", 25, 5), _target(target)
{
	std::cout << "A Presidential Pardon form for at: " << target << " has been created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{ 	
	std::cout << "Presidential Pardon Form: " << this->_target << " has been destroyed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : Form(obj)
{
	this->_target = obj.getTarget();
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	this->Form::operator=(obj); // uses the Form assignment constructor
	this->_target = obj.getTarget();
	return (*this);
}

std::string		PresidentialPardonForm::getTarget() const
{
	return this->_target;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeExec())
		throw Form::GradeTooLowException();
	else if (this->getSignature() == 0)
		throw Form::UnsignedFormException();
	else
	{
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
}

