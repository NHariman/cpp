/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/02 13:52:13 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/16 20:27:58 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <cstdlib>
#include <stdexcept>

// https://stackoverflow.com/questions/8152720/correct-way-to-inherit-from-stdexception
// on exceptions

class	Bureaucrat
{
	private:
		Bureaucrat();
		std::string const	_name;
		unsigned int		_grade; // 1 is highest, 150 is lowest
	public:
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(std::string name);
		~Bureaucrat();
		std::string			GradeTooHighException();
		std::string			GradeTooLowException();
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator=(const Bureaucrat& obj);
		std::string		getName() const;
		unsigned int	getGrade() const;
		void		setGrade(unsigned int grade);
		void		incGrade();
		void		decGrade();
		Bureaucrat	operator++ (int); // post-increment
		Bureaucrat&	operator++ (); // pre-increment
		Bureaucrat	operator-- (int); // post-increment
		Bureaucrat&	operator-- (); // pre-increment

		// class GradeTooLowException : public std::runtime_error
		// {
		// 	public:
		// 		GradeTooLowException();
		// };
		// class GradeTooLowException : public std::runtime_error
		// {
		// 	public:
		// 		GradeTooHighException();
		// };
};

std::ostream& operator<< (std::ostream &out, Bureaucrat const& obj);

#endif