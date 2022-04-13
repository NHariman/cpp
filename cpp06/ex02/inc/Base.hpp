/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/13 17:36:30 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/13 20:34:31 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
	public:
		virtual ~Base(){};
};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif
