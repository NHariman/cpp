/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 21:43:56 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/23 22:13:06 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		virtual ~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif