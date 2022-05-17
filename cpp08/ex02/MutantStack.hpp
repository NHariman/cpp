/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/06 18:06:17 by nhariman      #+#    #+#                 */
/*   Updated: 2022/05/17 18:20:32 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <deque>
#include <stack>
#include <stdexcept>

/*
	https://stackoverflow.com/questions/7758580/writing-your-own-stl-container
	on making your own STL container
*/
template<class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
	protected:
		//member object
		Container	c;
	public:
		// Member types
		typedef Container											Container_type;
    	typedef typename Container::value_type 						value_type; 
    	typedef typename Container::size_type 						size_type;
    	typedef typename Container::reference 						reference;
    	typedef typename Container::const_reference					const_reference;
		typedef	typename Container::deque::iterator					iterator;
		typedef typename Container::deque::reverse_iterator			reverse_iterator;
		typedef	typename Container::deque::const_iterator			const_iterator;
		typedef typename Container::deque::const_reverse_iterator	const_reverse_iterator;
		
		// constructor, destructor, assignment
		MutantStack() : c(Container()){};
		explicit MutantStack(const Container& cont)
		{
			c = cont();
		};
		~MutantStack(){};
		MutantStack(const MutantStack& other)
		{
			this->c = other.c;
		};
		MutantStack&	operator=(const MutantStack& other)
		{
			this->c = other.c;
			return *this;
		};
		// element access
		reference		top(void)
		{
			if (!c.empty())
				return this->c.back();
			throw OutOfBoundsException();
		};
		const_reference top(void) const
		{
			if (!c.empty())
				return this->c.back();
			throw OutOfBoundsException();
		};
		// capacity
		bool			empty(void) const
		{
			return this->c.empty();
		};
		size_type		size(void) const
		{
			return this->c.size();
		};
		// modifiers
		void			push(const value_type& value)
		{
			this->c.push_back(value);
		};
		void			pop(void)
		{
			if (c.empty())
				throw OutOfBoundsException();
			this->c.pop_back();			
		};

		// iterators
		iterator		begin(void)
		{
			return this->c.begin();
		};
		const_iterator	begin(void) const
		{
			return this->c.begin();
		};
		iterator		end(void)
		{
			return this->c.end();
		};
		const_iterator	end(void) const
		{
			return this->c.end();
		};
		class OutOfBoundsException : public std::exception
		{
			public:
				const char *what() const throw() {
					return "Out of Bounds Exception, this should actually crash in real program that doesn't have a crash flag implemented";
				}
		};
};

// nonmember functions
template< class T, class Container >
bool operator==( const MutantStack<T,Container>& lhs, const MutantStack<T,Container>& rhs )
{
	if (lhs == rhs)
		return true;
	else 
		return false;
};

template< class T, class Container >
bool operator!=( const MutantStack<T,Container>& lhs, const MutantStack<T,Container>& rhs )
{
	if (lhs != rhs)
		return true;
	else 
		return false;
};

template< class T, class Container >
bool operator<( const MutantStack<T,Container>& lhs, const MutantStack<T,Container>& rhs )
{
	if (lhs < rhs)
		return true;
	else 
		return false;
};

template< class T, class Container >
bool operator<=( const MutantStack<T,Container>& lhs, const MutantStack<T,Container>& rhs )
{
	if (lhs <= rhs)
		return true;
	else 
		return false;
};

template< class T, class Container >
bool operator>( const MutantStack<T,Container>& lhs, const MutantStack<T,Container>& rhs )
{
	if (lhs > rhs)
		return true;
	else 
		return false;
};

template< class T, class Container >
bool operator>=( const MutantStack<T,Container>& lhs, const MutantStack<T,Container>& rhs )
{
	if (lhs >= rhs)
		return true;
	else 
		return false;
};


#endif