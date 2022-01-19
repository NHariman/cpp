/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:37:51 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/19 17:09:56 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string _sound;
	public:
		WrongCat();
		~WrongCat();
		void	makeSound() const;
		std::string	getSound() const;
		void		setSound(std::string sound);
};


#endif