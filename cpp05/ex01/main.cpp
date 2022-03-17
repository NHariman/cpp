/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/02 13:52:15 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/17 21:49:56 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "colours.hpp"
#include <cstdlib>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "This main takes arguments:\n- Write 1 for Bureaucrat tests\n" << \
		"- Write 2 for Form tests\n" << \
		"- Write 3 for All tests (first Bureaucrat, then Form)" << std::endl;
	}
	else if (!strcmp(av[1], "1"))
		run_bureaucrat_tests();
	else if (!strcmp(av[1], "2"))
		run_form_tests();
	else if (!strcmp(av[1], "3"))
	{
		run_bureaucrat_tests();
		run_form_tests();
	}
	else
		std::cerr << "Invalid arguments" << std::endl;
	return (0);
}

static void	run_form_tests()
{
	
}

static void	run_bureaucrat_tests()
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
	//Bureaucrat	cannot; // cannot instantiate an empty bureaucrat.

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
	std::cout << B_BLUE << "Show that getName and getGrade work:" << B_END << std::endl;
	std::cout << "obj name: " << obj.getName() << std::endl;
	std::cout << "obj grade: " << obj.getGrade() << std::endl;
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
	std::cout << B_YELLOW << "decrement obj-- (the value should higher)" << B_END << std::endl;
	std::cout << B_YELLOW <<"before decrementing: " << B_END << obj << std::endl;
	std::cout << B_YELLOW << "The value should be the same as before decrementing when printing the obj-- part and give a tmp bureaucrat" << B_END << std::endl;
	std::cout << obj-- << std::endl;
	std::cout << B_YELLOW <<"after decrementing: " << B_END << obj << std::endl;
	std::cout << B_YELLOW << "decrement --obj (the value should higher)" << B_END << std::endl;
	std::cout << B_YELLOW << "value when printing --obj should be the new value" << B_END << std::endl;
	std::cout << B_YELLOW <<"Before incrementing: " << B_END << obj << std::endl;
	std::cout << ++obj << std::endl;
	std::cout << B_YELLOW <<"after decrementing: " << B_END << obj << std::endl;
	std::cout << B_YELLOW << "decrement obj with decGrade() (the value should higher)" << B_END << std::endl;
	std::cout << B_YELLOW <<"before decrementing: " << B_END << obj << std::endl;
	obj.decGrade();
	std::cout << B_YELLOW <<"after decrementing: " << B_END << obj << std::endl;

	std::cout << B_PURPLEB << "\nException throwing tests" << B_END << std::endl;
	std::cout << B_PURPLE << "Throwing exception for invalid initialisation, too high grade" << B_END << std::endl;
	try
	{
		Bureaucrat fail = Bureaucrat("fail", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << B_PURPLE << "Throwing exception for invalid initialisation, too low grade" << B_END << std::endl;
	try
	{
		Bureaucrat fail = Bureaucrat("fail", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << B_PURPLE << "Good initialisation but setGrade too high" << B_END << std::endl;
	try
	{
		Bureaucrat fail = Bureaucrat("fail", 15);
		fail.setGrade(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << B_PURPLE << "Good initialisation but setGrade too low" << B_END << std::endl;
	try
	{
		Bureaucrat fail = Bureaucrat("fail", 15);
		fail.setGrade(151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << B_PURPLE << "Incrementing too high: i++" << B_END << std::endl;
	try
	{
		Bureaucrat fail = Bureaucrat("fail", 1);
		fail++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}		
	std::cout << B_PURPLE << "Incrementing too high: ++i" << B_END << std::endl;
	try
	{
		Bureaucrat fail = Bureaucrat("fail", 1);
		++fail;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << B_PURPLE << "Incrementing too high: incGrade" << B_END << std::endl;
	try
	{
		Bureaucrat fail = Bureaucrat("fail", 1);
		fail.incGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << B_PURPLE << "Incrementing too high: i--" << B_END << std::endl;
	try
	{
		Bureaucrat fail = Bureaucrat("fail", 1);
		fail--;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}		
	std::cout << B_PURPLE << "Incrementing too low: --i" << B_END << std::endl;
	try
	{
		Bureaucrat fail = Bureaucrat("fail", 1);
		--fail;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << B_PURPLE << "Incrementing too low: decGrade" << B_END << std::endl;
	try
	{
		Bureaucrat fail = Bureaucrat("fail", 1);
		fail.decGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}


