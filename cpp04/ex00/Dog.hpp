/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:32:34 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/19 16:02:35 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		std::string _sound;
	public:
		Dog();
		virtual ~Dog();
		void	makeSound() const;
		std::string	getSound() const;
		void		setSound(std::string sound);
};

#endif