/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 21:49:02 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/01 22:17:19 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

// help https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/

Pony *Pony::PonyOnTheHeap(Pony *heappony, std::string mane_color, std::string eye_color, std::string breed, int height, int weight)
{
	heappony->mane_color = mane_color;
	heappony->eye_color = eye_color;
	heappony->breed = breed;
	heappony->height = height;
	heappony->weight = weight;
	return (heappony);
}

Pony Pony::PonyOnTheStack(Pony stackpony, std::string mane_color, std::string eye_color, std::string breed, int height, int weight)
{
	this->mane_color = mane_color;
	this->eye_color = eye_color;
	this->breed = breed;
	this->height = height;
	this->weight = weight;
	return (stackpony);
}
