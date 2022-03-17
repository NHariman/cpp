/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/17 21:06:24 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/17 21:42:07 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(				std::string	const name, 
						unsigned int const gradeSign, 
						unsigned int const gradeExec) :
						_name(name), _gradeSign(gradeSign), 
						_gradeExec(gradeExec), _signature(false)
{
	if (_gradeSign < 1 || _gradeExec < 1)
		throw GradeTooHighException();
	else if (_gradeSign > 150 || _gradeExec > 150)
		throw GradeTooLowException();
	std::cout << "A form has been created" << std::endl;
}

Form::Form(				std::string name, 
						unsigned int gradeSign, 
						unsigned int gradeExec) :
						_name(name), _gradeSign(gradeSign), 
						_gradeExec(gradeExec), _signature(false)
{
	if (_gradeSign < 1 || _gradeExec < 1)
		throw GradeTooHighException();
	else if (_gradeSign > 150 || _gradeExec > 150)
		throw GradeTooLowException();
	std::cout << "A form has been created" << std::endl;
}

Form::Form(const Form& obj) :
						_name(obj.getName()), _gradeSign(obj.getGradeSign()), 
						_gradeExec(obj.getGradeExec()), _signature(obj.getSignature())
{
	std::cout << "Form Copy constructor called" << std::endl;
}

Form&	Form::operator=(const Form& obj)
{
	if (obj.getGradeSign() < this->_gradeSign)
		this->_signature = obj.getSignature();
	else
		throw GradeTooLowException();
	std::cout << "Signature has been copied over." << std::endl;
}

std::string		Form::getName()	const
{
	return this->_name;
}

bool			Form::getSignature() const
{
	return this->_signature;
}

unsigned int	Form::getGradeSign() const
{
	return this->_gradeSign;
}

unsigned int	Form::getGradeExec() const
{
	return this->_gradeExec;
}

void			Form::beSigned(Bureaucrat obj)
{
	if (obj.getGrade() <= this->_gradeSign)
		this->_signature = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<< (std::ostream &out, Form const& obj)
{
	out << "Name of Form: " << obj.getName() << \
	"\nGrade for signing this form: " << obj.getGradeSign() << \
	"\nGrade for executing this form: " << obj.getGradeExec() << \
	"\nSigned: " << obj.getSignature() << std::endl;
}
