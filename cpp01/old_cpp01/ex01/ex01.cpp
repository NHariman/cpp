/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/08 15:22:27 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/08 15:25:58 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak(void) 
{
	std::string*        panther = new std::string("String panther");
	
	std::cout << *panther << std::endl;

	delete panther;
}

// Main to prove it's gone. Witout delete it would give a rootleak.
// int main(void)
// {
// 	memoryLeak();
// 	while(1)
// 	{;}
// 	return (0);
// }