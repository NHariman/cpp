/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:32:22 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/19 16:01:36 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		std::string _sound;
	public:
		Cat();
		virtual ~Cat();
		void	makeSound() const;
		std::string	getSound() const;
		void		setSound(std::string sound);
};

#endif