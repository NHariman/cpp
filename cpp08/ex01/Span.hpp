/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/04 15:46:53 by nhariman      #+#    #+#                 */
/*   Updated: 2022/05/05 19:36:49 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <list>
#include <cstdlib>

class Span
{
	private:
		const unsigned int	_n;
		std::list<int>		_l;
		Span();
	public:
		Span(unsigned int n);
		Span(const Span& obj);
		Span&	operator=(const Span& obj);
		~Span();
		void				addNumber(int i);
		unsigned int		maxSize(void) const;
		std::list<int>		getList(void) const;
		unsigned int		shortestSpan(void);
		unsigned int		longestSpan(void);
		void				fillSpan(void);
		void				printList(void);
		class NoSpanException : public std::exception
		{
			public:
				const char *what() const throw() {
					return "No Span Found.";
				}
		};
		class InvalidInputException : public std::exception
		{
			const char *what() const throw() {
				return "Invalid input detected.";
			}
		};
		class ListTooSmallException : public std::exception
		{
			const char *what() const throw() {
				return "List is too small to copy over all values.";
			}
		};
		class ListFullException : public std::exception{
			const char *what() const throw() {
				return "List is full!";
			}
		};
};

#endif