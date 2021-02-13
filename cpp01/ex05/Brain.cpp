/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/13 18:12:00 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/13 20:58:06 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(): _grey_matter(5), _white_matter(5), _neurons(5)
{
}

Brain::~Brain()
{
}

int			Brain::get_gm()
{
	return (this->_grey_matter);
}

int			Brain::get_wm()
{
	return (this->_white_matter);
}

int			Brain::get_neurons()
{
	return (this->_neurons);
}

void		Brain::set_gm(int gm)
{
	this->_grey_matter = gm;
}

void		Brain::set_wm(int wm)
{
	this->_white_matter = wm;
}

void		Brain::set_neurons(int neurons)
{
	this->_neurons = neurons;
}

std::string Brain::identify() const
{
	std::stringstream str;
	const long addr = (long)this;

	str << "0x" << std::uppercase << std::hex << addr ;

	return (str.str());
}
