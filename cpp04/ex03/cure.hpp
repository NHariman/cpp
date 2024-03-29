/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 21:41:11 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/23 22:12:55 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		virtual ~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif