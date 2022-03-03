/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/02 13:52:11 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/03 16:56:14 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
	try 
	{
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
		else
			_grade = grade;
	}
	catch(std::exception& e)
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
	//try catch
}

void		Bureaucrat::decGrade()
{
	//try catch
}

Bureaucrat	Bureaucrat::operator++ (int) // post-increment
{
	//try catch
}

Bureaucrat&	Bureaucrat::operator++ () // pre-increment
{
	//try catch
}

Bureaucrat	Bureaucrat::operator-- (int) // post-increment
{
	//try catch
}

Bureaucrat&	Bureaucrat::operator-- () // pre-increment
{
	//try catch
}

std::ostream& operator<< (std::ostream &out, Bureaucrat const& obj)
{
	return out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
}

