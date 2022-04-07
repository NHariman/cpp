/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Conversions.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/06 16:34:36 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/07 17:47:32 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_HPP
# define CONVERSIONS_HPP

#include <iostream>

// https://www.cplusplus.com/doc/oldtutorial/typecasting/
// https://www.geeksforgeeks.org/static_cast-in-c-type-casting-operators/
// types of casting in classes:
// dynamic_cast
// static_cast
// reinterpret_cast
// const_cast

class Conversions
{
	public:
		std::string		_input;
		char			_c;
		int				_i;
		float			_f;
		double			_d;
		Conversions();
		~Conversions();
		Conversions(const Conversions& obj);
		Conversions&	operator=(const Conversions& obj);
};

Conversions		fromInt(char* input);
Conversions		fromChar(char* input);
Conversions		fromFloat(char* input);
Conversions		fromDouble(char* input);

std::ostream&	operator<< (std::ostream &out, Conversions const & obj);

#endif