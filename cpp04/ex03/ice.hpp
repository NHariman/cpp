/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 21:43:56 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/08 21:44:11 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
}

#endif