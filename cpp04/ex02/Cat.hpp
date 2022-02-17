/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:32:22 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/17 16:11:35 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		std::string _sound;
		Brain*		_brain;
	public:
		Cat();
		virtual ~Cat();
		void	makeSound();
		std::string	getSound() const;
		void		setSound(std::string sound);
		Brain*		getBrain() const;
		Cat(const Cat& obj);
		Cat&	operator=(const Cat& obj);
		// it's a const because it has to be used in copy constructor of Brain
};

#endif