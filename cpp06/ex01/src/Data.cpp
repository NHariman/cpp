/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/12 21:39:52 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/12 21:58:57 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Data.hpp"

Data::Data(){};

Data::~Data(){};

Data::Data(const Data& obj)
{
	this->_data = obj._data;
	*this = obj;
}

Data::Data(void* ptr)
{
	this->_data = ptr;
}

Data&	Data::operator=(const Data& obj)
{
	this->_data = obj._data;
	return (*this);
}

void	Data::helloworld()
{
	std::cout << "Hello world from Data!" << std::endl;
}

std::ostream& operator<< (std::ostream &out, Data const& obj)
{
	return out << obj._data;
}