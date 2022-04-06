/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Conversions.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/06 16:34:20 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/06 21:17:09 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Conversions.hpp"

// https://www.cplusplus.com/doc/oldtutorial/typecasting/
// https://www.geeksforgeeks.org/static_cast-in-c-type-casting-operators/
// types of casting in classes:
// dynamic_cast
// static_cast
// reinterpret_cast
// const_cast

Conversions::Conversions()
{
	std::cout << "start conversion." << std::endl;
}

Conversions::~Conversions()
{
	std::cout << "End conversion." << std::endl;
}

Conversions::Conversions(const Conversions& obj) : \
										_c(obj._c), \
										_i(obj._i), \
										_f(obj._f), \
										_d(obj._d)
{
	*this = obj;
}

Conversions&	Conversions::operator=(const Conversions& obj)
{
	this->_c = obj._c;
	this->_d = obj._d;
	this->_i = obj._i;
	this->_f = obj._f;

	return (*this);
}

Conversions		fromInt(char *input)
{
	Conversions		ret;
	double			d = strtod(input, NULL);

	ret._d = d;
	ret._i = static_cast<int>(d);
	ret._f = static_cast<float>(d);
	ret._c = ret._i;
	
	return (ret);
}

Conversions		fromFloat(char *input)
{
	Conversions		ret;
	double			d = strtod(input, NULL);

	ret._d = d;
	ret._i = static_cast<int>(d);
	ret._f = static_cast<float>(d);
	ret._c = ret._i;
	
	return (ret);
}

Conversions		fromChar(char *input)
{
	Conversions		ret;
	double			d = strtod(input, NULL);

	ret._d = d;
	ret._i = static_cast<int>(d);
	ret._f = static_cast<float>(d);
	ret._c = ret._i;
	
	return (ret);
}

Conversions		fromDouble(char *input)
{
	Conversions		ret;
	double			d = strtod(input, NULL);

	ret._d = d;
	ret._i = static_cast<int>(d);
	ret._f = static_cast<float>(d);
	ret._c = ret._i;
	
	return (ret);
}