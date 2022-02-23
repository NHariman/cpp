/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/23 15:17:50 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/23 19:08:05 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual	~IMateriaSource() {}
		virtual	void		learnMateria(AMateria *obj) = 0;
		virtual	AMateria*	createMateria(std::string const & type) = 0;	
};

#endif
