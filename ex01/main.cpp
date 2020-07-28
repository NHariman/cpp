/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 21:36:19 by nhariman      #+#    #+#                 */
/*   Updated: 2020/07/28 21:16:58 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassPhonebook.hpp"



int main(void)
{    
    std::cout << "Welcome to your phonebook!" << std::endl;
    std::cout << "Use ADD to add contacts, SEARCH to check your phonebook and EXIT to quit" << std::endl;
    std::cout << "WARNING! All your contacts will be deleted once you write EXIT." << std::endl;
    std::cout << "THIS PROGRAM IS CASE SENSITIVE\n\"add\" WILL NOT BE RECOGNISED BUT \"ADD\" WILL." << std::endl;
    phonebook();
    std::cout << "Your contacts have been deleted. Goodbye!" << std::endl;
    return (0);
    
}