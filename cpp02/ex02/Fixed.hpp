/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/14 23:33:45 by nhariman      #+#    #+#                 */
/*   Updated: 2021/11/29 19:59:33 by nhariman      ########   odam.nl         */
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
		Fixed(int const nb);
		Fixed(float const nb);
		Fixed(Fixed const &nb);
		Fixed& 	operator= (Fixed const &fixed);
		Fixed&	operator> (Fixed &fixed);
		Fixed&	operator< (Fixed &fixed);
		Fixed&	operator>= (Fixed &fixed);
		Fixed&	operator<=	(Fixed &fixed);
		Fixed&	operator== (Fixed &fixed);
		Fixed&	operator!= (Fixed &fixed);
		Fixed	operator+ (Fixed &fixed);
		Fixed&	operator- (Fixed &fixed);
		Fixed&	operator* (Fixed &fixed);
		Fixed&	operator/ (Fixed &fixed);
		Fixed&	operator++ (Fixed &fixed);
		Fixed	operator++ (int);
		Fixed&	operator-- (Fixed &fixed);
		Fixed	operator-- (int);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static	Fixed&	min(Fixed& val1, Fixed& val2);
		static	Fixed&	max(Fixed& val1, Fixed& val2);
};

std::ostream& operator<< (std::ostream &out, Fixed const& fixed);

#endif