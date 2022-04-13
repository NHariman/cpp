/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Min.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/13 21:23:51 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/13 22:25:49 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_HPP
#define MIN_HPP


template <typename T>
T min(T x, T y)
{
	if (x < y)
		return x;
	else
		return y;
}

#endif