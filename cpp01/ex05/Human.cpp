/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/13 18:21:08 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/13 21:02:14 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

//returns the address of the brain that's being pointed to by this
// this is a Human class, so you call the address as Human
const Brain &Human::getBrain() const
{
	return (this->_brain);
}

//calls the identify function for the _brain that's being pointed to
// this time using the identify function in class Brain
std::string Human::identify() const
{
	return(this->_brain.identify());
}