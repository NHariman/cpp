/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/23 15:20:01 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/25 17:29:38 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		int			_id[4];
		AMateria*	index[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &obj);
		MateriaSource&	operator=(const MateriaSource &obj);
		virtual ~MateriaSource();
		void	learnMateria(AMateria *obj);
		AMateria*	createMateria(std::string const &obj);
};

#endif