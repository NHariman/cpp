/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 20:59:51 by nhariman      #+#    #+#                 */
/*   Updated: 2021/01/13 21:46:41 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static char		*scream(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[i] != (char *)0)
		{
			std::cout << scream(argv[i]);
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}