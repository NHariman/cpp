/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: niks <niks@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 17:21:45 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/11 18:05:30 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain& obj);
		Brain&	operator=(Brain const &obj);
		~Brain();
		std::string	ideas[100];
};

#endif