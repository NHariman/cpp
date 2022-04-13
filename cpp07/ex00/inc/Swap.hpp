/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Swap.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/13 21:23:51 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/13 22:25:45 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_HPP
#define SWAP_HPP

/*
	swapping them addressess
	https://www.cplusplus.com/doc/oldtutorial/templates/
*/

template <typename T>
void swap(T& x, T& y)
{
	T tmp;
	
	tmp = x;
	x = y;
	y = tmp;
}

#endif