/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:37:34 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/19 17:10:37 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

// without the use of virtual, the base class makeSound is used

#include <iostream>

class	WrongAnimal
{
	protected:
		std::string _type;
		void	setType(std::string type);
	public:
		WrongAnimal();
		~WrongAnimal();
		void	makeSound() const;
		WrongAnimal(std::string type);
		std::string	getType() const;
};

#endif