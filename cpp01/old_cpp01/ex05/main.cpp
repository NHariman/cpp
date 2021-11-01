/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/13 18:49:44 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/13 20:32:36 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int			main(void)
{
	Human		bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return (0);
}
