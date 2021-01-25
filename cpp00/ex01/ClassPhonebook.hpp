/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClassPhonebook.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 21:44:12 by nhariman      #+#    #+#                 */
/*   Updated: 2021/01/25 19:55:21 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_HPP
#define CLASSPHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdexcept>

#include "ClassContact.hpp"

class phonebook
{
	private:
		contact contacts[8];
	public:
		phonebook();
		void add_contact(contact *contacts, int nb);
		std::string get_input(std::string str);
		void search_phonebook(contact *contacts, int nb);
		void print_values(contact *contacts, int nb);
};

#endif
