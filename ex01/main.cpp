/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 21:36:19 by nhariman      #+#    #+#                 */
/*   Updated: 2020/07/27 22:11:41 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string command;

    std::cout << "Welcome to your phonebook!" << std::endl;
    std::cout << "Use ADD to add contacts, SEARCH to check your phonebook and EXIT to quit" << std::endl;
    std::cout << "WARNING! All your contacts will be deleted once you write EXIT." << std::endl;
    std::cout << "THIS PROGRAM IS CASE SENSITIVE\n\"add\" WILL NOT BE RECOGNISED BUT \"ADD\" WILL." << std::endl;
    std::cout << "Please enter your command now:" << std::endl;
    std::cin >> command;
    while (command.compare("EXIT") != 0)
    {   
        if (command.compare("ADD") == 0)
        {
            //add_contacts();
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
    std::cout << "Your contacts have been deleted. Goodbye!" << std::endl;
    return (0);
    
}