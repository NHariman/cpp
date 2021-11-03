/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 14:39:59 by nhariman      #+#    #+#                 */
/*   Updated: 2021/11/03 16:13:57 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _KAREN_HPP
#define _KAREN_HPP

#include <iostream>

class	Karen{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		typedef void (Karen::*karenptr)(void);
	public:
		Karen();
		~Karen();
		void	complain(std::string level);
};

#endif