/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:32:34 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/16 18:35:24 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		std::string _sound;
		Brain*		_brain;
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog& obj);
		Dog&	operator=(const Dog& obj);
		void	makeSound() const;
		std::string	getSound() const;
		void		setSound(std::string sound);
		Brain*		getBrain() const;
		// const because it has to be used in the copy constructor of Brain
};

#endif