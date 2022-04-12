/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialization.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/12 21:11:51 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/12 22:04:27 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/serialization.hpp"
#include "../inc/Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw); 
}