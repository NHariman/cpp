/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 20:59:17 by nhariman      #+#    #+#                 */
/*   Updated: 2020/07/27 20:59:20 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int     main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (j <= argc - 1)
	{
		while (argv[j][i] != '\0')
		{
			argv[j][i] = std::toupper(argv[j][i]);
			i++;
		}
		if (j == argc - 1)
			std::cout << argv[j] << std::endl;
		else
			std::cout << argv[j] << ' ';
		i = 0;
		j++;
	}
	return (0);
}
