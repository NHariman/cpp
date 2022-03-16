/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/02 13:52:11 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/16 20:53:47 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("tmp_function_made_Bureaucrat")
{}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
	std::cout << "Bureaucrat: " << name << " has been created." << std::endl;
	std::cout << "Their grade is: " << grade << std::endl;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name)
{

	std::cout << "Bureaucrat: " << name << " has been created" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat: " << this->_name << " has been destroyed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : _name(obj.getName()), _grade(obj.getGrade())
{}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &obj)
{
	std::cout << this->_name << " has stolen " << obj.getName() << "'s grade!" << std::endl;
	std::cout << "However they could not steal their name due to them being a const." << std::endl;
	this->_grade = obj.getGrade();
    return *this;
}

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

unsigned int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::setGrade(unsigned int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->_grade = grade;
}

std::string			Bureaucrat::GradeTooHighException()
{
	return "Grade is too high\n";
}

std::string			Bureaucrat::GradeTooLowException()
{
	return "Grade is too low\n";
}

void		Bureaucrat::incGrade()
{
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
	else
		this->_grade--;
}

void		Bureaucrat::decGrade()
{
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

Bureaucrat	Bureaucrat::operator++ (int) // post-increment
{
	Bureaucrat tmp;

	tmp._grade = this->_grade;
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
	else
		this->_grade--;
	return tmp;
}

Bureaucrat&	Bureaucrat::operator++ () // pre-increment
{
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
	else
		this->_grade--;
	return *this;
}

Bureaucrat	Bureaucrat::operator-- (int) // post-increment
{
	Bureaucrat tmp;

	tmp._grade = this->_grade;
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
	else
		this->_grade++;
	return tmp;
}

Bureaucrat&	Bureaucrat::operator-- () // pre-increment
{
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
	else
		this->_grade++;
	return *this;
}

std::ostream& operator<< (std::ostream &out, Bureaucrat const& obj)
{
	return out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
}

