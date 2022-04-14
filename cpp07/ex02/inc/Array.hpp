/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/14 15:18:41 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/14 20:54:54 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP // can also use pragma once

/*
	https://www.programiz.com/cpp-programming/class-templates
	https://www.geeksforgeeks.org/templates-cpp/ 
	on class templates
*/

template <class T>
class Array{
	public:
		T*	_array;
		Array()
		{
			
		};
		~Array(){};
		Array(unsigned int n)
		{

		};
		Array(const Array& obj); // deep copy
		Array& operator=(const Array& obj); // deep copy
		const unsigned int	size(void);
};


#endif