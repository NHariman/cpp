/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClassPhonebook.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 22:27:27 by nhariman      #+#    #+#                 */
/*   Updated: 2020/07/28 04:47:47 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_H
#define CLASSPHONEBOOK_H

#include <iostream>

class phonebook
{
private:
	char *name[7];
	char *lastname[7];
	char *nickname[7];
	char *login[7];
	char *postcode[7];
	char *email[7];
	char *phone[7];
	char *bday[7];
	char *meal[7];
	char *underwear[7];
	char *secret[7];

public:
	phonebook()
	{
		int i;
		std::string command;

		i = 0;
		std::cout << "Please enter your command now:" << std::endl;
    	std::cin >> command;
    	while (command.compare("EXIT") != 0)
    	{   
        	if (command.compare("ADD") == 0)
        	{
            	add_contact(i);
				if (i < 7)
					i++;
            	std::cout << "lol" << std::endl;
       		}
        	else if (command.compare("SEARCH") == 0)
        	{
            	//search_phonebook();
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
		return ;

	}
	void add_contact(int count);
	void search_phonebook(void);
};

#endif