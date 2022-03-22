/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   run_form_tests.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/18 14:21:14 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/21 16:35:52 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/TestHeader.hpp"

// Noah: pulled pork met pico de gallo
// Liewe: classic CBA with chipotle

void	run_form_tests()
{
	std::cout << B_GREENB << "Basic Form Tests" << B_END << std::endl;
	std::cout << B_GREEN << "Creating a Form A" << B_END << std::endl;
	Form A = Form("A", 5, 5);
	std::cout << B_GREEN << "Show A:" << B_END << std::endl;
	std::cout << A << std::endl;
	std::cout << B_GREEN << "Show getName, getSign, getGradeSign, getGradeExec:" << B_END << std::endl;
	std::cout << "A name: " << A.getName() << std::endl;
	std::cout << "A signature: " << A.getSignature() << std::endl;
	std::cout << "A Signing grade: " << A.getGradeSign() << std::endl;
	std::cout << "A Exec grade: " << A.getGradeExec() << std::endl;
	std::cout << B_GREEN << "Create a Bureaucrat who can sign the form" << B_END << std::endl;
	Bureaucrat guy = Bureaucrat("Guy", 5);
	std::cout << guy << std::endl;
	std::cout << B_GREEN << "Get Bureaucrat to try and sign the form:" << B_END << std::endl;
	std::cout << A << std::endl;
	guy.signForm(A);
	std::cout << A << std::endl;
	std::cout << B_GREEN << "Creating a Form B" << B_END << std::endl;
	Form B = Form("B", 5, 5);
	std::cout << B_GREEN << "use beSigned:" << B_END << std::endl;
	std::cout << B << std::endl;
	B.beSigned(guy);
	std::cout << B << std::endl;
	std::cout << B_GREENB << "\nTry/Catch cases:" << B_END << std::endl;
	
	std::cout << B_GREEN << "Sign Form test:" << B_END << std::endl;
	Bureaucrat okay = Bureaucrat("okay", 4);
	Form		C = Form("C", 3, 3);
	try
	{
		okay.signForm(C);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << B_GREEN << "\nbeSigned test:" << B_END << std::endl;
	try
	{
		C.beSigned(okay);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << B_GREEN << "\nForm copy constructor test:" << B_END << std::endl;
	std::cout << B_GREEN << "Form C:" << B_END << std::endl;
	std::cout << C << std::endl;
	std::cout << B_GREEN << "Create Bureaucrat" << B_END << std::endl;
	Bureaucrat lol = Bureaucrat("lol", 1);
	std::cout << lol << std::endl;
	std::cout << B_GREEN << "Sign form" << B_END << std::endl;
	lol.signForm(C);
	std::cout << C << std::endl;
	std::cout << B_GREEN << "Create form D with Form(C)" << B_END << std::endl;
	Form D = Form(C);
	std::cout << "Form D: " << D << std::endl;
	std::cout << B_GREEN << "Create Form E with 2, 2" << B_END << std::endl;
	Form E = Form("E", 2, 2);
	std::cout << B_GREEN << "Try to copy C to E:" << B_END << std::endl;
	try
	{
		E = C;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << B_GREEN << "Bad constructor values:" << B_END << std::endl;
	try
	{
		std::cout << B_GREEN << "too low F, 151, 1:" << B_END << std::endl;
		Form F = Form("F", 151, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << B_GREEN << "too low F, 1, 151:" << B_END << std::endl;
		Form F = Form("F", 1, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << B_GREEN << "too high F, 0, 1:" << B_END << std::endl;
		Form F = Form("F", 0, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << B_GREEN << "too low F, 1, 0:" << B_END << std::endl;
		Form F = Form("F", 1, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << B_GREENB << "\nEND" << B_END << std::endl;
}
