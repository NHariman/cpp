/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Max.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/13 21:23:51 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/13 22:25:52 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAX_HPP
#define MAX_HPP

template <typename T>
T max(T x, T y)
{
	if (x > y)
		return x;
	else
		return y;
}

#endif