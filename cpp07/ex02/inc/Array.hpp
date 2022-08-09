/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/14 15:18:41 by nhariman      #+#    #+#                 */
/*   Updated: 2022/08/09 15:04:11 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP // can also use pragma once

#include "colours.hpp"
/*
	https://www.programiz.com/cpp-programming/class-templates
	https://www.geeksforgeeks.org/templates-cpp/ 
	on class templates

	https://www.tutorialspoint.com/cplusplus/subscripting_operator_overloading.htm
	on subscript operator overloading
*/

template <class T>
class Array{
		private:
			unsigned int	_len;
	public:
		T*	_array;
		Array() : _len(10)
		{
			std::cout << B_BLUEB << "Default Constructor: Created an array of 10" << B_END << std::endl;
			_array = new T[10]; // creates an empty array of length 10
		};
		~Array(){
			delete [] _array;
			std::cout << B_BLUEB << "Deleted array"  << B_END << std::endl;
		};
		Array(unsigned int n) : _len(n)
		{
			_array = new T[n];
			std::cout << B_BLUEB << "Constructor that takes unsigned int: Created an array of length: " << n << B_END << std::endl;
		};
		T	&operator[](int i)
		{
			if (i >= this->_len || i < 0)
				throw OutOfBoundsException();
			else
				return _array[i];
		}
		Array(const Array& obj) : _len(obj._len)
		{
			std::cout << B_BLUEB << "Called copy constructor" << B_END << std::endl;
			this->_array = new T[obj._len]; // make new array
			for (int i = 0; i < obj._len; i++)
				_array[i] = obj._array[i];
		}; // deep copy
		Array& operator=(const Array& obj)
		{
			std::cout << B_BLUEB << "Called assignation overload" << B_END << std::endl;
			std::cout <<  B_BLUE << "delete old array" << B_END << std::endl;
			delete [] this->_array; //delete old array
			std::cout << B_BLUE << "create new array with proper obj._len: " << obj.getLen() << B_END << std::endl;
			this->_array = new T[obj.getLen()]; // make new array
			std::cout << B_BLUE << "fill array" << B_END << std::endl;
			for (int i = 0; i < obj.getLen(); i++)
				_array[i] = obj._array[i];
			_len = obj.getLen();
			return *this;
		}; // deep copy
		const unsigned int	size(void)
		{
			return this->_len;
		}
		const int		getLen(void) const
		{
			return this->_len;
		}
		class OutOfBoundsException : public std::exception
		{
			public:
				const char *what() const throw() {
					return "Index Out Of Bounds";
				}
		};
};


#endif