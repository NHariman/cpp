/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: niks <niks@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:32:22 by nhariman      #+#    #+#                 */
/*   Updated: 2022/02/09 19:23:23 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*		_brain;
	public:
		Cat();
		Cat(const Cat& obj);
		virtual ~Cat();
		Cat&	operator=(Cat const &cat);
		void	makeSound() const;
		Brain*		getBrain() const;
		std::string	getIdeas(int nb) const;
		void		setIdeas(int nb, std::string content) const;
};

#endif