/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:32:18 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/23 21:16:15 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"
#include "colours.hpp"

// https://www.geeksforgeeks.org/virtual-function-cpp/
// A virtual function is a member function which is declared 
// within a base class and is re-defined (overridden) 
// by a derived class. When you refer to a derived class object 
//using a pointer or a reference to the base class, 
// you can call a virtual function for that object and 
// execute the derived class’s version of the function. 

// use of virtual finctions:
// - ensure correct function is called for an object, regardless
// of the type of reference (or pointer) used for 
// the function call
// - use for runtime polymorphism

class	Animal
{
	protected:
		std::string _type;
		void	setType(std::string type);
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal& obj);
		Animal&			operator=(const Animal& obj);
		virtual void	makeSound() const;
		Animal(std::string const type);
		std::string	getType() const;
		virtual Brain*	getBrain() const; // remove because otherwise you always have to instantiate a brain function
};

#endif