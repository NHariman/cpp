/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/14 23:33:45 by nhariman      #+#    #+#                 */
/*   Updated: 2021/12/09 22:38:14 by nhariman      ########   odam.nl         */
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
		Fixed	operator++ (int); // post-increment
		Fixed&	operator++ (); // pre-increment
		Fixed	operator-- (int); // post-increment
		Fixed&	operator-- (); // pre-increment
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		// static functions must be declared WITHIN the class
		static	Fixed&	min(Fixed& val1, Fixed& val2)
		{
			if (val1._fpv > val2._fpv)
				return (val2);
			return (val1);
		}
		static	Fixed&	max(Fixed& val1, Fixed& val2)
		{
			if (val1._fpv < val2._fpv)
				return (val2);
			return (val1);
		}
		// static functions must be declared WITHIN the class, this is a function overload
		static	const Fixed&	min(const Fixed& val1, const Fixed& val2)
		{
			if (val1._fpv > val2._fpv)
				return (val2);
			return (val1);
		}
		static	const Fixed&	max(const Fixed& val1, const Fixed& val2)
		{
			if (val1._fpv < val2._fpv)
				return (val2);
			return (val1);
		}
};

std::ostream& operator<< (std::ostream &out, Fixed const& fixed);

#endif