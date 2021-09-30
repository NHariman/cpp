/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClassPhonebook.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 21:44:07 by nhariman      #+#    #+#                 */
/*   Updated: 2021/09/30 19:21:20 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "ClassPhonebook.hpp"

static int	is_number(std::string s)
{
	for (int i = 0; i < (int)s.length(); i++)
        if (isdigit(s[i]) == 0)
            return 0;
    return 1;
}

std::string phonebook::get_input(std::string str)
{
	while (str.compare("") == 0)
	{
		std::getline(std::cin, str);
		if (!std::cin)
			exit (0);
		if (str.compare("") == 0)
			std::cout << "Warning! Field cannot be empty!\n> ";
	}
	return (str);
}

void	phonebook::add_contact(contact *contact, int nb)
{
	std::string nm;
	std::string ln;
	std::string nn;
	std::string ph;
	std::string sc;
	std::string input;

	std::cout << "ADD A CONTACT:" << std::endl;
	std::cout << "Enter contact's first name:\n> ";
	nm = get_input(nm);
	std::cout << "Enter contact's last name:\n> ";
	ln = get_input(ln);
	std::cout << "Enter contact's nickname:\n> ";
	nn = get_input(nn);
	std::cout << "Enter contact's phone:\n> ";
	ph = get_input(ph);
	std::cout << "Enter contact's darkest secret:\n> ";
	sc = get_input(sc);
	std::cout << "Please review your input:" << std::endl;
	std::cout << "First name: " << nm << std::endl;
	std::cout << "Last name: " << ln << std::endl;
	std::cout << "Nickname: " << nn << std::endl;
	std::cout << "Phone number: " << ph << std::endl;
	std::cout << "Darkest secret: " << sc << std::endl;
	std::cout << "Is it correct? Y/N" << std::endl;
	while (input.compare("Y") && input.compare("N"))
	{
		std::getline(std::cin, input);
		if (!std::cin)
			exit (0);
		if (input.compare("Y") == 0)
		{
			contacts[nb].set_values(nm, ln, nn, ph, sc);
			std::cout << "That's all, contact has been saved." << std::endl;
		}
		else if (input.compare("N") == 0)
		{
			std::cout << "please redo your input\n";
			add_contact(contact, nb);
		}
		else
			std::cout << "Please write Y or N\n";
	}
}

void	phonebook::print_values(contact *contact, int i)
{
	std::cout << "First name: " <<		contact[i].get_name() << std::endl;
	std::cout << "Last name: " <<		contact[i].get_lastname() << std::endl;
	std::cout << "Nickname: " <<		contact[i].get_nickname() << std::endl;
	std::cout << "Phone number: " << 	contact[i].get_phone() << std::endl;
	std::cout << "Darkest secret: " << 	contact[i].get_secret() << std::endl;
}

void	phonebook::search_phonebook(contact *contacts, int nb)
{
	int 		i;
	long		num;
	std::string name;
	std::string lastname;
	std::string nickname;
	std::string index;

	i = 0;
	std::cout << std::setw(10) << "Index";
	std::cout << std::setw(10) << " First Name";
    std::cout << std::setw(10) << " Last Name";
    std::cout << std::setw(10) << " Nickname" << std::endl;
	while (i < nb)
	{
		name = contacts[i].get_name();
		lastname = contacts[i].get_lastname();
		nickname = contacts[i].get_nickname();
		std::cout << std::setw(10) << i << '|';
		if (name.length() > 10)
        	std::cout << name.substr(0, 9) + '.';
		else
			std::cout << std::setw(10) << name;
		std::cout << '|';
        if (lastname.length() > 10)
			std::cout << lastname.substr(0, 9) + '.';	
		else
			std::cout << std::setw(10) << lastname;
			std::cout << '|';
		if (nickname.length() > 10)
			std::cout << nickname.substr(0, 9) + '.';	
		else
			std::cout << std::setw(10) << nickname;
		std::cout << std::endl;
		i++;
	}
	if (name.compare("") == 0)
		return ;
	std::cout << "Select an index [0-7]:\n> ";
	std::getline(std::cin, index);
	if (!std::cin)
			exit (0);
	if (is_number(index))
		num = std::atol(index.std::string::c_str());
	else
		num = -1;
	if (num < 8 && num >= 0 && num <= nb)
		print_values(contacts, num);
	else
		std::cout << "Invalid input\n";
}

void	phonebook::start_main(void)
{
	std::string command;
	int	full = 0;
	int i;

	i = 0;
	std::cout << "Please enter your command now:" << std::endl;
    while (command.compare("EXIT") != 0)
    {   
		std::cout << "\033[1;36mINPUT COMMAND>\033[0m";
		std::getline(std::cin, command);
		if (!std::cin)
			exit (0);
		if (command.compare("EXIT") == 0)
			return ;
        else if (command.compare("ADD") == 0)
        {
			if (i < 8 && full == 0)
			{
				add_contact(contacts, i);
				i++;
			}
			else
			{
				std::cout << "Phonebook is full! Your OLDEST contact will be overwritten." << std::endl;
				std::cout << "Continue? Y/N" << std::endl;
				std::getline(std::cin, command);
				if (!std::cin)
					exit (0);
				if (command.compare("Y") == 0)
				{
					if (full == 0)
					{
						full = 1;
						i = 0;
					}
					add_contact(contacts, i);
					i++;
				}
				else
				{
					if (command.compare("N") != 0)
						std::cout << "command not found\n";
					std::cout << "Contact not added." << std::endl;
				}
        	}
		}
        else if (command.compare("SEARCH") == 0)
            search_phonebook(contacts, i);
        else
        {
            std::cout << "Sorry, that command does not exist." << std::endl;
            std::cout << "Write: ADD to add contacts, SEARCH to find contacts and EXIT to leave" << std::endl;
			std::cout << "THIS PROGRAM IS CASE SENSITIVE" << std::endl;
        }
    }
}

phonebook::phonebook(void)
{
	std::cout << "Welcome to your phonebook!" << std::endl;
    std::cout << "Use ADD to add contacts, SEARCH to check your phonebook and EXIT to quit" << std::endl;
    std::cout << "WARNING! All your contacts will be deleted once you write EXIT." << std::endl;
    std::cout << "THIS PROGRAM IS CASE SENSITIVE\n\"add\" WILL NOT BE RECOGNISED BUT \"ADD\" WILL." << std::endl;
    start_main();
}

phonebook::~phonebook(void)
{
	std::cout << "Your contacts have been deleted. Goodbye!" << std::endl;
}
