/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/13 15:25:34 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/13 23:53:05 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain
{
	private:
		int _grey_matter;
		int _white_matter;
		int _neurons;
	public:
		Brain();
		~Brain();
		std::string identify() const;
		int			get_gm();
		int			get_wm();
		int			get_neurons();
		void		set_gm(int gm);
		void		set_wm(int wm);
		void		set_neurons(int neurons);
};

#endif
