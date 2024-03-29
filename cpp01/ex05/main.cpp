/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 14:33:54 by nhariman      #+#    #+#                 */
/*   Updated: 2021/11/03 17:33:23 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(void)
{
	const std::string	levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};

	Karen	lol;

	lol.complain("INFO");
	lol.complain("DEBUG");
	lol.complain("WARNING");
	lol.complain("ERROR");
	lol.complain("error");
	lol.complain("a");
	lol.complain("");
	// NULL will segfault it because std::strings don't accept NULL, they aren't pointers
	return (0);
}
