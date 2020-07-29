/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClassPhonebook.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 22:27:27 by nhariman      #+#    #+#                 */
/*   Updated: 2020/07/29 17:22:48 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_H
#define CLASSPHONEBOOK_H

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
	void set_name(std::string str){
		_name = str;
	}
	void set_lastname(std::string str){
		_lastname = str;
	}
	void set_nickname(std::string str){
		_nickname = str;
	}
	void set_login(std::string str){
		_login = str;
	}
	void set_postcode(std::string str){
		_postcode = str;
	}
	void set_email(std::string str){
		_email = str;
	}
	void set_phone(std::string str){
		_phone = str;
	}
	void set_bday(std::string str){
		_bday = str;
	}
	void set_meal(std::string str){
		_meal = str;
	}
	void set_underwear(std::string str){
		_underwear = str;
	}
	void set_secret(std::string str){
		_secret = str;
	}
	// get
	std::string get_name(){
		return _name;
	}
	std::string get_lastname(){
		return _lastname;
	}
	std::string get_nickname(){
		return _nickname;
	}
	std::string get_login(){
		return _login;
	}
	std::string get_postcode(){
		return _postcode;
	}
	std::string get_email(){
		return _email;
	}
	std::string get_phone(){
		return _phone;
	}
	std::string get_bday(){
		return _bday;
	}
	std::string get_meal(){
		return _meal;
	}
	std::string get_underwear(){
		return _underwear;
	}
	std::string get_secret(){
		return _secret;
	}
};

class phonebook
{
private:
	contact contacts[8];

public:
	phonebook();
	void add_contact(contact contact);
	void search_phonebook(contact *contacts, int nb);
};

#endif