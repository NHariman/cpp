/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/04 16:49:26 by nhariman      #+#    #+#                 */
/*   Updated: 2022/05/06 17:57:09 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <limits>

// in order to calculate the difference use std::abs

Span::Span() : _n(0)
{};

Span::~Span()
{};

Span::Span(unsigned int n) : _n(n)
{
	if (static_cast<int>(n) <= 0)
		throw InvalidInputException();
	// in order to check if n wasn't given a negative number
	// by the user
	// static_cast<int> is used to turn the n into an int
	// to check if the sign bit was negative.
	// if so, it throws the error
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
	return *this;
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
	if (this->_l.size() >= this->_n)
		throw ListFullException();
	else
		this->_l.push_back(i);
}

unsigned int	Span::shortestSpan(void)
{
	if (this->_l.empty() || this->_l.size() == 1)
		throw NoSpanException();
	std::list<int>::iterator pos;
	std::list<int>::iterator next_pos;
	std::list<int>::iterator end(this->_l.end());
	end = std::prev(end, 2);

	int min_span = INT_MAX;

	for (pos = this->_l.begin(); pos != this->_l.end(); ++pos)
	{
		for (next_pos = std::next(pos, 1); next_pos != this->_l.end(); ++next_pos)
		{
			if (std::abs(*pos - *next_pos) < min_span)
				min_span = std::abs(*pos - *next_pos);
		}
	}
	return (min_span);
	// use abs to determine the distance between two subsequent points
	// store the lowest value. every time a lower value is found
	// replace the old value with that value
	// repeat until you're at the end of the list and return the lowest number

}

unsigned int	Span::longestSpan(void)
{
	if (this->_l.empty() || this->_l.size() == 1)
		throw NoSpanException();
	return (*std::max_element(this->_l.begin(), this->_l.end()) - *std::min_element(this->_l.begin(), this->_l.end()));
}

void			Span::fillSpan(void)
{
	for (int i = 0; i < static_cast<int>(this->_n) ; i++)
    	this->_l.push_back(rand()); // this is what works
}

void			Span::printList(void)
{
	for (std::list<int>::iterator i = this->_l.begin(); i != this->_l.end(); ++i)
    	std::cout << '\t' << *i;
	std::cout << std::endl;
}