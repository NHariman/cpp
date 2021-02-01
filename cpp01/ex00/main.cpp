/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 22:00:34 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/01 22:26:08 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int		main(void)
{
	Pony stackpony;
	Pony *heappony;
	std::string mane_color, eye_color, coat_color;
	std::string breed;
	int height, weight;

	heappony = Pony::PonyOnTheHeap(heappony, mane_color, eye_color, breed, height, weight);
	stackpony = Pony::PonyOnTheStack(&stackpony, mane_color, eye_color, breed, height, weight);
}