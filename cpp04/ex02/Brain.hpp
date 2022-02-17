/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 18:28:30 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/16 19:17:43 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class	Brain
{
	public:
		Brain();
		~Brain();
		Brain(const Brain& obj);
		Brain& operator=(const Brain& obj);
		std::string ideas[100];
};

#endif