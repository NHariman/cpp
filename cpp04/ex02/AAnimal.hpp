/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/19 14:32:18 by nhariman      #+#    #+#                 */
/*   Updated: 2022/01/19 16:56:45 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

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

class	AAnimal
{
	protected:
		std::string _type;
		void	setType(std::string type);
	public:
		virtual ~AAnimal();
		virtual void	makeSound() const = 0; // doing this makes the class an abstract class, removal of constructor to make it not instantiable
};

#endif