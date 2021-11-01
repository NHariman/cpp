/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/13 15:30:03 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/13 20:35:53 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
	private:
		const Brain _brain;
	public:
		Human();
		~Human();
		const Brain &getBrain() const;
		std::string identify() const;
};

#endif
