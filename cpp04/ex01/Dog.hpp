/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: niks <niks@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:32:34 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/09 19:23:28 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*		_brain;
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog& obj);
		Dog&	operator=(Dog const &dog);
		void	makeSound() const;
		Brain*		getBrain() const;
		std::string	getIdeas(int nb) const;
		void		setIdeas(int nb, std::string content) const;
};

#endif