/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/01 18:16:28 by nhariman      #+#    #+#                 */
/*   Updated: 2021/12/15 20:25:31 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string		intro;
	std::string*	stringPTR = &intro;
	std::string&	stringREF = intro;

	intro = "HI THIS IS  BRAIN";

	std::cout << "Display address:" << std::endl;

	std::cout << "Using &intro: " << &intro << std::endl;
	std::cout << "Using stringPTR: " << stringPTR << std::endl;
	std::cout << "Using &stringREF: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Display string contents:" << std::endl;

	std::cout << "Using intro: " << intro << std::endl;
	std::cout << "Using *stringPTR: " << *stringPTR << std::endl;
	std::cout << "Using stringREF: " << stringREF << std::endl;

}
