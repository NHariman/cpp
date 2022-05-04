/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/04 16:49:26 by nhariman      #+#    #+#                 */
/*   Updated: 2022/05/04 18:51:07 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// in order to calculate the difference use std::abs

Span::Span() : _n(0)
{};

Span::Span(unsigned int n) : _n(n)
{
	if (n <= 0)
		throw InvalidInputException();
}

Span::Span(const Span& obj) : _n(obj.maxSize())
{
	this->_l.assign(obj.getList().begin(), obj.getList().end());
}

Span&	Span::operator=(const Span& obj)
{
	if (this->_n < obj.maxSize())
		throw ListTooSmallException();
	this->_l.assign(obj.getList().begin(), obj.getList().end());
}

unsigned int	Span::maxSize(void) const
{
	return this->_n;
}

std::list<int>		Span::getList(void) const
{
	return (this->_l);
}

void	Span::addNumber(int i)
{
	if (this->_l.size() > this->_n)
		throw ListFullException();
	else
		this->_l.push_back(i);
}

unsigned long int	Span::shortestSpan(void)
{
	if (this->_l.empty() || this->_l.size() == 1)
		throw NoSpanException();
	// use abs to determine the distance between two subsequent points
	// store the lowest value. every time a lower value is found
	// replace the old value with that value
	// repeat until you're at the end of the list and return the lowest number

}

unsigned long int	Span::longestSpan(void)
{
	if (this->_l.empty() || this->_l.size() == 1)
		throw NoSpanException();
	// use abs to determine the distance between two subsequent points
	// store the highest value. every time a higher value is found
	// replace the old value with that value
	// repeat until you're at the end of the list and return the highest number
	
}
