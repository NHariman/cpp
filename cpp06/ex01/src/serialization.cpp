/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialization.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/12 21:11:51 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/13 18:25:35 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/serialization.hpp"
#include "../inc/Data.hpp"

/*

	reinterpret casting: https://www.cplusplus.com/doc/oldtutorial/typecasting/
	https://en.cppreference.com/w/cpp/language/reinterpret_cast
	format:
	reinterpret_cast<new-type>(expression)
	Instructs the compiler to treat the expression as if it had the type new-type
	It forces Data to gain the type uintptr_t
	and uintptr_t to get type Data *.

*/

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw); 
}