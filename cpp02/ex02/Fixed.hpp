/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/14 23:33:45 by nhariman      #+#    #+#                 */
/*   Updated: 2021/12/07 22:16:56 by nhariman      ########   odam.nl         */
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
		bool	operator>	(Fixed &fixed) const;
		bool	operator<	(Fixed &fixed) const;
		bool	operator>=	(Fixed &fixed) const;
		bool	operator<=	(Fixed &fixed) const;
		bool	operator==	(Fixed &fixed) const;
		bool	operator!=	(Fixed &fixed) const;
		Fixed	operator+ (const Fixed &fixed) const;
		Fixed	operator- (const Fixed &fixed) const;
		Fixed	operator* (const Fixed &fixed) const;
		Fixed	operator/ (const Fixed &fixed) const;
		Fixed&	operator++ (int);
		Fixed	operator++ ();
		Fixed&	operator-- (int);
		Fixed	operator-- ();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static	Fixed&	min(const Fixed& val1, const Fixed& val2);
		static	Fixed&	max(const Fixed& val1, const Fixed& val2);
};

std::ostream& operator<< (std::ostream &out, Fixed const& fixed);

#endif