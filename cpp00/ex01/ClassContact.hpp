/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClassContact.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 09:17:46 by nhariman      #+#    #+#                 */
/*   Updated: 2021/09/29 19:20:50 by nhariman      ########   odam.nl         */
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
	std::string _phone;
	std::string _secret;
public:
	contact();
	~contact();
	void set_values(std::string nm, std::string ln,
			std::string nn, std::string ph, std::string sc);
	std::string get_name();
	std::string get_lastname();
	std::string get_nickname();
	std::string get_phone();
	std::string get_secret();
};

#endif
