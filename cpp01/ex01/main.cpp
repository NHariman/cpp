/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 21:50:26 by nhariman      #+#    #+#                 */
/*   Updated: 2021/12/01 14:52:17 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
	Zombie	*horde = NULL;
	int num = -1;

	std::cout << "Welcome to a zombie apocalypse tour part two!\n";
	std::cout << "\nLet's call a horde!\n\n";
	std::cout << "How many zombies do you want to see?\n[ENTER SIZE 1-100]> ";
	std::getline(std::cin, index);
	if (!std::cin)
		exit (0);
	while (num == -1)
	{
		if (is_number(index))
			num = std::stol(index);
		else
			num = -1;
		if (num < 100 && num > 0)
		{
			std::cout << num << std::endl;
			break ;
		}
		else
		{
			std::cout << "number between 1 and 100 please.\n> ";
			std::getline(std::cin, index);
			if (!std::cin)
				exit (0);
			num = -1;
		}
	}
	horde = horde->zombieHorde(num, "Start");
	std::cout << "\nLet's meet them!\n";
	
	int i = 0;
	while (i < num)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
	std::cout << "Ok bye now!\n\n";
	return (0);
}
