/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/13 21:41:27 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/13 22:28:49 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

/*
	on typename vs class:
	https://stackoverflow.com/questions/2023977/difference-of-keywords-typename-and-class-in-templates
	typename is usually for referencing a nested type that depends on another template parameter
	if you are specifying a TEMPLATE TEMPLATE you need to use class
	(though it seems to work on typename here too??)

	in this exercise you can see you can have a bunch of rando types
	you just need to make enough types to fill any kind of input for the template
*/

template <typename ArrT, typename L, class FuncT, typename Input>
void	iter(ArrT& array, L len, FuncT (* f)(Input))
{
	for (int i = 0; i < len; i++)
		(*f)(array[i]);
}


#endif