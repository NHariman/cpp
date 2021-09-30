/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClassContact.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 09:17:41 by nhariman      #+#    #+#                 */
/*   Updated: 2021/09/29 19:21:21 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

contact::contact(void)
{
	return ;
}

contact::~contact(void)
{
	return ;
}

void contact::set_values(std::string nm, std::string ln, std::string nn, 
std::string ph, std::string sc)
{
	this->_name = nm;
	this->_lastname = ln;
	this->_nickname = nn;
	this->_phone = ph;
	this->_secret = sc;
}

std::string contact::get_name(void)
{
	return this->_name;
}

std::string contact::get_lastname(void)
{
	return this->_lastname;
}

std::string contact::get_nickname(void)
{
	return this->_nickname;
}

std::string contact::get_phone(void)
{
	return this->_phone;
}

std::string contact::get_secret(void)
{
	return this->_secret;
}
