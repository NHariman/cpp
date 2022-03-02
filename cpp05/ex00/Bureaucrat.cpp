/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/02 13:52:11 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/02 21:48:40 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{

	std::cout << "Bureaucrat: " << name << " has been created" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat: " << name << " has been destroyed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
	this->_name = obj.getName();
	this->_grade = obj.getGrade();
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& obj)
{
	this->_name = obj.getName();
	this->_grade = obj.getGrade();
}

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

std::string	Bureaucrat::getGrade() const
{
	return this->_grade;
}

std::string			GradeTooHighException()
{
	return "Grade is too high\n";
}

std::string			GradeTooLowException()
{
	return "Grade is too low\n";
}

Bureaucrat	Bureaucrat::operator++ (int) // post-increment
{

}

Bureaucrat&	Bureaucrat::operator++ () // pre-increment
{

}

Bureaucrat	Bureaucrat::operator-- (int) // post-increment
{

}

Bureaucrat&	Bureaucrat::operator-- () // pre-increment
{

}

std::ostream& operator<< (std::ostream &out, Bureaucrat const& obj)
{
	return out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
}

