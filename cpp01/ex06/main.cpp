/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 14:33:54 by nhariman      #+#    #+#                 */
/*   Updated: 2021/11/03 20:50:33 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int ac, char** av)
{
	Karen	carl;
	const std::string	levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	complaint;

	if (ac != 2)
	{
		if (ac == 1)
			std::cout << "No complaints logged." << std::endl;
		else
			std::cout << "Too many complaints coming in at once!" << std::endl;
		return (0);
	}
	const int	case_study = std::find(levels, levels + 4, std::string(av[1])) - levels;
	switch(case_study) {
		case (0):
		case (1):
		case (2):
		case (3):{
			
			for (int i = case_study; i >=0; i--)
			{
				std::cout << "[" << levels[i] << "]" << std::endl;
				carl.complain(levels[i]);
				if (i != 0)
					std::cout << std::endl;
			}
			break ;
		};
		default:
			std::cout << "[Nothing to report!]" << std::endl;
			break ;
	}

	return (0);
}
