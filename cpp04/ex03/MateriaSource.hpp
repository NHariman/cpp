/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/23 15:20:01 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/23 19:11:23 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public:
		AMateria*	index[4];
		MateriaSource();
		MateriaSource(const MateriaSource &obj);
		MateriaSource*	operator=(const MateriaSource &obj);
		virtual ~MateriaSource();
		void	learnMateria(AMateria *obj);
		AMateria*	createMateria(std::string const &obj);
};

#endif