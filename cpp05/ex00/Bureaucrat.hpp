/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/02 13:52:13 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/03 17:53:49 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <cstdlib>
#include <stdexcept>

// https://stackoverflow.com/questions/8152720/correct-way-to-inherit-from-stdexception
// on exceptions

class	Bureaucrat : public std::exception
{
	private:
		Bureaucrat();
		std::string const	_name;
		unsigned int		_grade; // 1 is highest, 150 is lowest
		// std::string			GradeTooHighException();
		// std::string			GradeTooLowException();
	public:
		Bureaucrat(std::string name);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator=(const Bureaucrat& obj);
		std::string		getName() const;
		unsigned int	getGrade() const;
		void		incGrade();
		void		decGrade();
		Bureaucrat	operator++ (int); // post-increment
		Bureaucrat&	operator++ (); // pre-increment
		Bureaucrat	operator-- (int); // post-increment
		Bureaucrat&	operator-- (); // pre-increment

		class GradeTooLowException : public std::runtime_error
		{
			public:
				GradeTooLowException();
		};
};

std::ostream& operator<< (std::ostream &out, Bureaucrat const& obj);

#endif