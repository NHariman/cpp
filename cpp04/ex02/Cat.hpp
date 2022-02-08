/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: niks <niks@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:32:22 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/08 19:22:33 by nhariman      ########   odam.nl         */
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
		Cat(Cat& obj);
		virtual ~Cat();
		Cat&	operator=(Cat const &cat);
		void	makeSound() const;
		std::string	getSound() const;
		void		setSound(std::string sound);
		Brain*		getBrain();
		std::string	getIdeas(int nb);
		void		setIdeas(int nb, std::string content);
};

#endif