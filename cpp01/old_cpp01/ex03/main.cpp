/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 21:50:26 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/08 23:59:31 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

static int	is_number(std::string s)
{
	for (int i = 0; i < (int)s.length(); i++)
        if (isdigit(s[i]) == 0)
            return 0;
    return 1;
}

int		main(void)
{
	std::string index;
	int num = -1;
	int final;

	std::cout << "Welcome to a zombie apocalypse tour part two!\n";
	std::cout << "\nLet's call a horde!\n\n";
	std::cout << "How many zombies do you want to see?\n[ENTER SIZE 1-100]> ";
	std::getline(std::cin, index);
	while (num == -1)
	{
		if (is_number(index))
			num = std::stol(index);
		else
			num = -1;
		if (num < 100 && num > 0)
		{
			final = num;
			std::cout << final << std::endl;
			break ;
		}
		else
		{
			std::cout << "number between 1 and 100 please.\n> ";
			std::getline(std::cin, index);
			num = -1;
		}
	}
	ZombieHorde zombies(num);
	std::cout << "\nLet's meet them!\n";
	zombies.announce();
	std::cout << "Ok bye now!\n\n";
	return (0);
}