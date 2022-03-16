/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/02 13:52:15 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/16 20:57:08 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "colours.hpp"

int main()
{
	std::cout << B_BLUEB << "Basic tests" << B_END << std::endl;
	std::cout << B_BLUE << "Create and announce Bureaucrats:" << B_END << std::endl;
	Bureaucrat test = Bureaucrat("test", 10);
	std::cout << test << std::endl;
	Bureaucrat obj = Bureaucrat("obj", 15);
	std::cout << obj << std::endl;
	std::cout << B_BLUE << "Also make some pointers, tmp and ptr: (Nothing will show up)" << B_END << std::endl;
	Bureaucrat	*tmp;
	Bureaucrat	*ptr;
	//Bureaucrat	cannot;


	std::cout << B_BLUE << "Assign tmp to the address of Bureaucrat test" << B_END << std::endl;
	tmp = &test;
	std::cout << B_BLUE << "print tmp to stdout:" << B_END << std::endl;
	std::cout << *tmp << std::endl;
	std::cout << B_BLUE << "use new to create a new bureaucrat that copies test and assign it to ptr:" << B_END << std::endl;
	ptr = new Bureaucrat(test);
	std::cout << B_BLUE << "Show ptr:" << B_END << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << B_BLUE << "Overwrite obj with test (Only the grade will be overwritten bc name is a const):" << B_END << std::endl;
	std::cout << obj << std::endl;
	std::cout << test << std::endl;
	obj = test;
	std::cout << B_BLUE << "Show that obj and test now have the same grade:" << B_END << std::endl;
	std::cout << obj << std::endl;
	std::cout << test << std::endl;
	delete ptr;
	std::cout << B_REDB << "\nIncrementing tests" << B_END << std::endl;
	std::cout << B_RED << "Increment obj++ (the value should lower at the end)" << B_END << std::endl;
	std::cout << B_RED <<"Before incrementing: " << B_END << obj << std::endl;
	std::cout << B_RED << "The value should be the same as before incrementing when printing the obj++ part and give a tmp bureaucrat" << B_END << std::endl;
	std::cout << obj++ << std::endl;
	std::cout << B_RED <<"After incrementing: " << B_END << obj << std::endl;
	std::cout << B_RED << "\nIncrement ++obj" << B_END << std::endl;
	std::cout << B_RED << "value when printing ++obj should be the new value" << B_END << std::endl;
	std::cout << B_RED <<"Before incrementing: " << B_END << obj << std::endl;
	std::cout << ++obj << std::endl;
	std::cout << B_RED <<"After incrementing: " << B_END << obj << std::endl;
	std::cout << B_RED << "\nIncrement obj with incGrade() (the value should lower)" << B_END << std::endl;
	std::cout << B_RED <<"Before incrementing: " << B_END << obj << std::endl;
	obj.incGrade();
	std::cout << B_RED <<"After incrementing: " << B_END << obj << std::endl;

	std::cout << B_YELLOWB << "\ndecrementing tests" << B_END << std::endl;
	std::cout << B_YELLOWB << "decrement obj-- (the value should higher)" << B_END << std::endl;
	std::cout << B_YELLOWB <<"before decrementing: " << B_END << obj << std::endl;
	obj--;
	std::cout << B_YELLOWB <<"after decrementing: " << B_END << obj << std::endl;
	std::cout << B_YELLOWB << "decrement --obj (the value should higher)" << B_END << std::endl;
	std::cout << B_YELLOWB <<"before decrementing: " << B_END << obj << std::endl;
	--obj;
	std::cout << B_YELLOWB <<"after decrementing: " << B_END << obj << std::endl;
	std::cout << B_YELLOWB << "decrement obj with decGrade() (the value should higher)" << B_END << std::endl;
	std::cout << B_YELLOWB <<"before decrementing: " << B_END << obj << std::endl;
	obj.decGrade();
	std::cout << B_YELLOWB <<"after decrementing: " << B_END << obj << std::endl;

	return (0);
}
