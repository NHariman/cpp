/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhariman <nhariman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:52:13 by nhariman          #+#    #+#             */
/*   Updated: 2022/03/18 14:37:07 by nhariman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <cstdlib>
#include <stdexcept>

// https://stackoverflow.com/questions/8152720/correct-way-to-inherit-from-stdexception
// on exceptions

# include "Form.hpp"

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
		void		signForm(Form &obj);
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw() {
					return "Grade too low exception";
				}
		};
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw() {
					return "Grade too high exception";
				}
		};
};

std::ostream& operator<< (std::ostream &out, Bureaucrat const& obj);

#endif