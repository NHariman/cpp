/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 17:21:45 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/19 19:04:31 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(Brain& obj);
		~Brain();
		std::string *getIdeas();
};

#endif