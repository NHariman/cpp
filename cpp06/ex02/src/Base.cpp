/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/13 17:37:21 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/13 20:52:08 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"
#include <stdexcept>
#include "../inc/colours.hpp"

Base*	generate(void)
{
	std::cout << B_GREEN << ">> Generate a class" << B_END << std::endl;
	Base	*ptr;
	unsigned int	type = rand() % 3;
	switch(type)
	{
		case 0:
		{	
			ptr = new A();
			std::cout << B_REDB << "Base class A generated" << B_END << std::endl;
			break ;
		}
		case 1:
		{	
			ptr = new B();
			std::cout << B_BLUEB << "Base class B generated" << B_END << std::endl;
			break ;
		}
		case 2:
		{	
			ptr = new C();
			std::cout << B_PURPLEB << "Base class C generated" << B_END << std::endl;
			break ;
		}
		default:
		{	
			std::cerr << "Error occured?" << std::endl;
			return NULL ;
		}
	}
	return (ptr);
}

/*

	Dynamic casting:
	more robust than typeid();
	dynamic cast performs a checked typecast at runtime
	that will yield a valid pointer if the cast succeeds and a nullptr otherwise.
	https://stackoverflow.com/questions/4589226/type-checking-in-c
	
 */

 void	identify(Base* p)
 {
	std::cout << B_YELLOW << ">> In identify(Base* p)" << B_END << std::endl;
	Base	*test_case;
	 
	if ((test_case = dynamic_cast<A *>(p)) != NULL)
	 	std::cout << B_REDB << "The given pointer is of derived class A" << B_END << std::endl;
	else if ((test_case = dynamic_cast<B *>(p)) != NULL)
	 	std::cout << B_BLUEB << "The given pointer is of derived class B" << B_END<< std::endl;
	else if	((test_case = dynamic_cast<C *>(p)) != NULL)
	 	std::cout << B_PURPLEB << "The given pointer is of derived class C" << B_END << std::endl;
 }

 void	identify(Base& p)
 {
	std::cout << ">> In identify(Base& p)" << std::endl;
	try{
		Base& test_case = dynamic_cast<A &>(p);
		std::cout << B_REDB << "The given address is of derived class A" << B_END << std::endl;
		return ;
	}
	catch (const std::exception& e){
		e.what();
	}
	try{
		Base& test_case = dynamic_cast<B &>(p);
		std::cout << B_BLUEB << "The given address is of derived class B" << B_END << std::endl;
		return ;
	}
	catch (const std::exception& e){
		e.what();
	}
	try{
		Base& test_case = dynamic_cast<C &>(p);
		std::cout << B_PURPLEB << "The given address is of derived class C" << B_END << std::endl;
		return ;
	}
	catch (const std::exception& e){
		e.what();
	}
 }