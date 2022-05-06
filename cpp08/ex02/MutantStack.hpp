/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/06 18:06:17 by nhariman      #+#    #+#                 */
/*   Updated: 2022/05/06 20:44:51 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <deque>

/*
	https://stackoverflow.com/questions/7758580/writing-your-own-stl-container
	on making your own STL container
*/
template<class T, class Container = std::deque<T> >
class MutantStack
{
	protected:
		Container	c;
	public:
		typedef Container Container_type;
    	typedef typename Container::value_type value_type; 
    	typedef typename Container::size_type size_type;
    	typedef typename Container::reference reference;
    	typedef typename Container::const_reference const_reference;
		
		MutantStack(){};
		~MutantStack(){};
		MutantStack(const MutantStack& obj);
		MutantStack&	operator=(const MutantStack& obj)
		{
			//stuff;
		};
		reference	top(void);
		const_reference top(void) const;
		

};

#endif