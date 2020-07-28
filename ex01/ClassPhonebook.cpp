/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClassPhonebook.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 04:27:56 by nhariman      #+#    #+#                 */
/*   Updated: 2020/07/28 04:40:38 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"

phonebook::add_contact(int count)
	{
		if (count > 7)
		{
			std::cout << "Sorry! Your phonebook is full. Max. 8 contacts have been reached." << std::endl;
			return ;
		}
		std::cout << "Enter contact's first name:" << std::endl;
		std::cin >> *name[count];
		std::cout << "Enter contact's last name:" << std::endl;
		std::cin >> *lastname[count];
		std::cout << "Enter contact's nickname:" << std::endl;
		std::cin >> *nickname[count];
		std::cout << "Enter contact's username:" << std::endl;
		std::cin >> *nickname[count];
		std::cout << "Enter contact's postal address:" << std::endl;
		std::cin >> *postcode[count];
		std::cout << "Enter contact's email:" << std::endl;
		std::cin >> *email[count];
		std::cout << "Enter contact's phone:" << std::endl;
		std::cin >> *phone[count];
		std::cout << "Enter contact's birthday:" << std::endl;
		std::cin >> *bday[count];
		std::cout << "Enter contact's favourite meal:" << std::endl;
		std::cin >> *meal[count];
		std::cout << "Enter contact's underwear colour:" << std::endl;
		std::cin >> *underwear[count];
		std::cout << "Enter contact's darkest secret:" << std::endl;
		std::cin >> *secret[count];
		std::cout << "That's all, contact has been saved." << std::endl;
		return ;
	}