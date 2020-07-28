/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClassPhonebook.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 04:27:56 by nhariman      #+#    #+#                 */
/*   Updated: 2020/07/28 22:37:16 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"
#include <string.h> 

phonebook::phonebook(void)
{
	std::string command;
	int i;

	i = 0;
	std::cout << "Please enter your command now:" << std::endl;
    std::cin >> command;
    while (command.compare("EXIT") != 0)
    {   
        if (command.compare("ADD") == 0)
        {
			if (i < 8)
			{
				add_contact(contacts[i]);
				i++;
			}
			else
				std::cout << "Phonebook is full!" << std::endl;
            std::cout << "lol" << std::endl;
        }
        else if (command.compare("SEARCH") == 0)
        {
            search_phonebook(contacts, i);
            std::cout << "lmao" << std::endl;
        }
        else
        {
            std::cout << "Sorry, that command does not exist." << std::endl;
            std::cout << "Write: ADD to add contacts, SEARCH to find contacts and EXIT to leave" << std::endl;
        }
        std::cout << "Anything else?" << std::endl;
        std::cin >> command;
    }
}

void	phonebook::add_contact(contact contact)
{
		std::string rep;

		std::cout << "ADD A CONTACT:" << std::endl;
		std::cout << "Enter contact's first name:" << std::endl;
		std::getline(std::cin, rep);
		contact.set_name(rep);
		std::cout << "Enter contact's last name:" << std::endl;
		std::getline(std::cin, rep);
		contact.set_lastname(rep);
		std::cout << "Enter contact's nickname:" << std::endl;
		std::getline(std::cin, rep);
		contact.set_nickname(rep);
		std::cout << "Enter contact's login:" << std::endl;
		std::getline(std::cin, rep);
		contact.set_login(rep);
		std::cout << "Enter contact's postal address:" << std::endl;
		std::getline(std::cin, rep);
		contact.set_postcode(rep);
		std::cout << "Enter contact's email:" << std::endl;
		std::getline(std::cin, rep);
		contact.set_email(rep);
		std::cout << "Enter contact's phone:" << std::endl;
		std::getline(std::cin, rep);
		contact.set_phone(rep);
		std::cout << "Enter contact's birthday:" << std::endl;
		std::getline(std::cin, rep);
		contact.set_bday(rep);
		std::cout << "Enter contact's favourite meal:" << std::endl;
		std::getline(std::cin, rep);
		contact.set_meal(rep);
		std::cout << "Enter contact's underwear colour:" << std::endl;
		std::getline(std::cin, rep);
		contact.set_underwear(rep);
		std::cout << "Enter contact's darkest secret:" << std::endl;
		std::getline(std::cin, rep);
		contact.set_secret(rep);
		std::cout << "That's all, contact has been saved." << std::endl;
}

void	phonebook::search_phonebook(contact *contacts, int nb)
{
	int i;

	i = 0;
	std::cout << std::setw(10 - strlen("Index")) << "Index" <<
        std::setw(10 - strlen("First Name")) << "First Name" <<
        std::setw(10 - strlen("Last Name")) << "Last Name" <<
        std::setw(10 - strlen("Nickname")) << "Nickname" << std::endl;
	while (i <= nb)
	{
		std::cout << std::setw(10) << "This" <<
        std::setw(10) << "is" <<
        std::setw(10) << "a" <<
        std::setw(10) << "test" << std::endl;
	}
	
}