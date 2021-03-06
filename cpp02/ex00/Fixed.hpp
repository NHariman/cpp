/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/14 23:33:45 by nhariman      #+#    #+#                 */
/*   Updated: 2021/04/26 15:15:12 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int	_fpv; //Fixed Point Value
		static const int _fb = 8; //Number of fractional bits
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &nb);
		Fixed& 	operator= (const Fixed &fixed);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif