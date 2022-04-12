/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/12 18:46:55 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/12 21:58:35 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
	public:
		void*	_data;
		void	helloworld();
		Data();
		Data(void *ptr);
		~Data();
		Data(const Data& obj);
		Data&	operator=(const Data& obj);
};

std::ostream& operator<< (std::ostream &out, Data const& obj);

#endif