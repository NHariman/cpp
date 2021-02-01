/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 21:49:02 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/01 21:59:15 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int Pony::PonyOnTheHeap(std::string mane_color, std::string eye_color, std::string breed, int height, int weight)
{
	this->mane_color = mane_color;
	this->eye_color = eye_color;
	this->breed = breed;
	this->height = height;
	this->weight = weight;
}

int Pony::PonyOnTheStack(Pony *pony, std::string mane_color, std::string eye_color, std::string breed, int height, int weight)
{
	pony->mane_color = mane_color;
	pony->eye_color = eye_color;
	pony->breed = breed;
	pony->height = height;
	pony->weight = weight;
}
