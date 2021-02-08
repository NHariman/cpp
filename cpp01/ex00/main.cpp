/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 22:00:34 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/08 15:13:26 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int		main(void)
{
	std::cout << "~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~" << std::endl;
	std::cout << "Welcome to The Main!" << std::endl;
	std::cout << "~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~" << std::endl;
	std::cout << "Here are some Ponies to get started:\n\n";

	Pony boo = Pony("Booboo", "white", "blue", "white", "connemara", 130, 50);
	std::cout << std::endl << std::endl << boo.get_name() << " is a pony from The Stack, you'll go there later to meet other Stack ponies.\n";

	Pony *apple = new Pony("Apple", "black", "brown", "black", "new forest", 115, 56);
	std::cout << std::endl << std::endl << apple->get_name() << " is a pony from The Heap, you'll go there later to meet other Heap ponies.\n";

	std::cout << "\nThe Main ranch has both stack and heap ponies living together. " << boo.get_name() << " and " << apple->get_name() << " get along very well together!" << std::endl;

	std::cout << "\nLet's go to the other ranch to see where " << apple->get_name() << " came from.\n";
	PonyOnTheHeap();

	std::cout << "\n\n~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~" << std::endl;
	std::cout << "Welcome back to the Main!" << std::endl;
	std::cout << "~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~" << std::endl;
	std::cout << ":( sorry to hear the pony you befriended at The Heap died.\n";
	std::cout << "\nLet's not dwell on such sad things through, we still have to visit The Stack to see where " << boo.get_name() << " came from.\n";
	PonyOnTheStack();

	std::cout << "\n\n~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~" << std::endl;
	std::cout << "Wecome back to the Main again!" <<std::endl;
	std::cout << "~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~~@~" << std::endl;
	std::cout << ":( I heard the Stack pony you befriended died as well! There must be some weird pony killing virus going around. You better go home and process the grief of losing two ponies you loved.\n";
	
	std::cout << "\nWhy don't you say goodbye to our Main ponies before you go though!" << std::endl;
	std::cout << "\nLet's say goodbye to " << apple->get_name() << " first. You always have to say goodbye to Stack ponies before you say goodbye to Heap ponies." << std::endl;
	delete apple;

	std::cout << "\nOH NO!!\n\nWell... at least we still have one pony left..\n";
	return (0);
}