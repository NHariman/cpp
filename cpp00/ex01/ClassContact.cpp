/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClassContact.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 09:17:41 by nhariman      #+#    #+#                 */
/*   Updated: 2021/01/25 18:51:41 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

void contact::set_values(std::string nm, std::string ln, std::string nn, std::string lg, std::string pc, std::string em, std::string ph, std::string bd, std::string ml, std::string uw, std::string sc)
{
	this->_name = nm;
	this->_lastname = ln;
	this->_nickname = nn;
	this->_login = lg;
	this->_postcode = pc;
	this->_email = em;
	this->_phone = ph;
	this->_bday = bd;
	this->_meal = ml;
	this->_underwear = uw;
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

std::string contact::get_login(void)
{
	return this->_login;
}

std::string contact::get_postcode(void)
{
	return this->_postcode;
}

std::string contact::get_email(void)
{
	return this->_email;
}

std::string contact::get_phone(void)
{
	return this->_phone;
}

std::string contact::get_bday(void)
{
	return this->_bday;
}

std::string contact::get_meal(void)
{
	return this->_meal;
}

std::string contact::get_underwear(void)
{
	return this->_underwear;
}

std::string contact::get_secret(void)
{
	return this->_secret;
}
