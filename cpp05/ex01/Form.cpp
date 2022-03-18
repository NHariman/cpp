/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhariman <nhariman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 21:06:24 by nhariman          #+#    #+#             */
/*   Updated: 2022/03/18 14:54:44 by nhariman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(				std::string name, 
						unsigned int gradeSign, 
						unsigned int gradeExec) : \
						_name(name), _signature(false), _gradeSign(gradeSign), \
						_gradeExec(gradeExec)
{
	if (_gradeSign < 1 || _gradeExec < 1)
		throw GradeTooHighException();
	else if (_gradeSign > 150 || _gradeExec > 150)
		throw GradeTooLowException();
	std::cout << "A form has been created" << std::endl;
}

Form::Form(const Form& obj) : \
						_name(obj.getName()), _signature(obj.getSignature()), _gradeSign(obj.getGradeSign()), \
						_gradeExec(obj.getGradeExec())
{
	std::cout << "Form Copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form " << this->_name << " has been destroyed." << std::endl;
}

Form&	Form::operator=(const Form& obj)
{
	if (obj.getGradeSign() < this->_gradeSign)
		this->_signature = obj.getSignature();
	else
		throw GradeTooLowException();
	std::cout << "Signature has been copied over." << std::endl;
	return *this;
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

void			Form::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() <= this->_gradeSign)
		this->_signature = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<< (std::ostream &out, Form const& obj)
{
	return out << "Name of Form: " << obj.getName() << \
	"\nGrade for signing this form: " << obj.getGradeSign() << \
	"\nGrade for executing this form: " << obj.getGradeExec() << \
	"\nSigned: " << obj.getSignature();
}
