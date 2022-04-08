/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Conversions.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/06 16:34:20 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/08 20:22:22 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Conversions.hpp"
#include <stdlib.h>
#include <limits.h>

// https://www.cplusplus.com/doc/oldtutorial/typecasting/
// https://www.geeksforgeeks.org/static_cast-in-c-type-casting-operators/
// types of casting in classes:
// dynamic_cast
// static_cast
// reinterpret_cast
// const_cast

// Conversions::Conversions()
// {
// 	std::cout << "start conversion." << std::endl;
// }

// Conversions::~Conversions()
// {
// 	std::cout << "End conversion." << std::endl;
// }

// Conversions::Conversions(const Conversions& obj) : \
// 										_c(obj._c), \
// 										_i(obj._i), \
// 										_f(obj._f), \
// 										_d(obj._d)
// {
// 	*this = obj;
// }

// Conversions&	Conversions::operator=(const Conversions& obj)
// {
// 	this->_c = obj._c;
// 	this->_d = obj._d;
// 	this->_i = obj._i;
// 	this->_f = obj._f;

// 	return (*this);
// }

Conversions		fromInt(char *input)
{
	Conversions		ret;
	double			d = strtod(input, NULL);
	std::string		value(input);

	ret._type = 'i';
	ret._input = value;
	ret._d = d;
	ret._i = static_cast<int>(d);
	ret._f = static_cast<float>(d);
	ret._c = ret._i;
	std::cout << "Int time" << std::endl;
	
	return (ret);
}

Conversions		fromFloat(char *input)
{
	Conversions		ret;
	double			d = strtod(input, NULL);
	std::string		value(input);

	ret._type = 'f';
	ret._input = value;
	ret._d = d;
	ret._i = static_cast<int>(d);
	ret._f = static_cast<float>(d);
	ret._c = ret._i;
	std::cout << "Float time" << std::endl;
	
	return (ret);
}

Conversions		fromChar(char *input)
{
	Conversions		ret;
	std::string		value(input);

	ret._type = 'c';
	ret._input = value;
	ret._c = input[0];
	ret._d = static_cast<double>(ret._c);
	ret._i = static_cast<int>(ret._c);
	ret._f = static_cast<float>(ret._c);
	return (ret);
}

Conversions		fromDouble(char *input)
{
	Conversions		ret;
	double			d = strtod(input, NULL);
	std::string		value(input);

	ret._type = 'd';
	ret._input = value;
	ret._d = d;
	ret._i = static_cast<int>(d);
	ret._f = static_cast<float>(d);
	ret._c = ret._i;
	std::cout << "Double time" << std::endl;
	return (ret);
}

static std::string	char_return_string(Conversions obj)
{
	std::string	char_str(1, obj._c);
	
	if (std::isprint(obj._c))
		return (char_str);
	else if ((obj._f <= 255 && obj._f >= 0))
		return "non displayable";
	else
		return "impossible";
}

static	void	int_return_string(Conversions obj, std::ostream *out)
{
	// check if int did not overflow. if it did write impossible.
	if ((obj._f >= INT_MAX && obj._f <= INT_MIN) || (float)obj._i != obj._f)
		*out << "int: " << "impossible" << std::endl;
	else
		*out << "int: " << obj._i << std::endl;
}

static	void	float_return_string(Conversions obj, std::ostream *out)
{
	*out << "float: " << obj._f;
	if (obj._f == (int)obj._f)
		*out << ".0f";
	*out << std::endl;
}

static	std::string	double_return_string(Conversions obj)
{
	if (obj._f == (int)obj._f)
		return (".0");
	return std::string();
}

std::ostream&	operator<< (std::ostream &out, Conversions const & obj)
{
	out << "char: " << char_return_string(obj) << std::endl;
	int_return_string(obj, &out);
	float_return_string(obj, &out);
	out << "double: " << obj._d << double_return_string(obj) << std::endl;

	return out;
}