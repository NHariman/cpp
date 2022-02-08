/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: niks <niks@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:32:34 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/08 19:22:48 by nhariman      ########   odam.nl         */
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
		Dog(Dog& obj);
		Dog&	operator=(Dog const &dog);
		void	makeSound() const;
		std::string	getSound() const;
		void		setSound(std::string sound);
		Brain*		getBrain();
		std::string	getIdeas(int nb);
		void		setIdeas(int nb, std::string content);
};

#endif