/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 21:41:11 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/17 21:07:47 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif