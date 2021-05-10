/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClassContact.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 09:17:46 by nhariman      #+#    #+#                 */
/*   Updated: 2021/05/08 14:04:33 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_HPP
#define CLASSCONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class contact
{
private:
	std::string _name;
	std::string _lastname;
	std::string _nickname;
	std::string _login;
	std::string _postcode;
	std::string _email;
	std::string _phone;
	std::string _bday;
	std::string _meal;
	std::string _underwear;
	std::string _secret;
public:
	void set_values(std::string nm, std::string ln, std::string nn, std::string lg, std::string pc, std::string em, std::string ph, std::string bd, std::string ml, std::string uw, std::string sc);
	std::string get_name();
	std::string get_lastname();
	std::string get_nickname();
	std::string get_login();
	std::string get_postcode();
	std::string get_email();
	std::string get_phone();
	std::string get_bday();
	std::string get_meal();
	std::string get_underwear();
	std::string get_secret();
};

#endif
