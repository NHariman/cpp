/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/17 21:06:49 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/17 21:36:55 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string 	_name;
		bool				_signature;
		const unsigned int	_gradeSign; // 1 is highest, 150 is lowest
		const unsigned int	_gradeExec;
		Form();
	public:
		Form(std::string const name, unsigned int const gradeSign, unsigned int const gradeExec);
		Form(std::string name, unsigned int gradeSign, unsigned int gradeExec);
		Form(const Form& obj);
		Form&	operator=(const Form& obj);
		~Form();
		std::string		getName() const;
		bool			getSignature() const;
		unsigned int	getGradeSign() const;
		unsigned int	getGradeExec() const;
		void			beSigned(Bureaucrat obj);
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw() {
					return "Form Grade too low exception";
				}
		};
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw() {
					return "Form Grade too high exception";
				}
		};
};

std::ostream& operator<< (std::ostream &out, Form const& obj);

#endif