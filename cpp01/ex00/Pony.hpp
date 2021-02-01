/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 21:25:29 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/01 21:56:19 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdexcept>

class Pony
{
	std::string mane_color, eye_color, coat_color;
	std::string breed;
	int height, weight;
	
	int PonyOnTheHeap(std::string mane_color, std::string eye_color, std::string breed, int height, int weight);

	int PonyOnTheStack(Pony *pony, std::string mane_color, std::string eye_color, std::string breed, int height, int weight);
};


