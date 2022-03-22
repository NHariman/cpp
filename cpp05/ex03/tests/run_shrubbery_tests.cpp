/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   run_shrubbery_tests.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/21 16:03:17 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/21 20:58:45 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/TestHeader.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/Bureaucrat.hpp"

void run_shrubbery_tests()
{
	ShrubberyCreationForm A = ShrubberyCreationForm("A");

	std::cout << B_BLUEB << "Created a Bureaucrat that can sign and execute a ShrubberyCreationForm" << B_END << std::endl;
	Bureaucrat guy = Bureaucrat("guy", 5);
	std::cout << guy << std::endl;
	std::cout << A << std::endl;
	std::cout << B_BLUE << "Guy will now sign form:" << B_END << std::endl;
	guy.signForm(A);
	std::cout << A << std::endl;
	guy.executeForm(A);
	std::cout << B_BLUE << "New bureaucrat who can't sign forms:" << B_END << std::endl;
	Bureaucrat temp = Bureaucrat("temp", 150);
	std::cout << B_BLUE << "Try to execute form A:" << B_END << std::endl;
	temp.executeForm(A);
	std::cout << B_BLUE << "New form B:" << B_END << std::endl;	
	ShrubberyCreationForm B = ShrubberyCreationForm("B");
	temp.signForm(B);
	std::cout << B_BLUE << "Basic tests:" << B_END << std::endl;
	ShrubberyCreationForm C = ShrubberyCreationForm(B);
	std::cout << C << std::endl;
	C = A;
	std::cout << C << std::endl;
	std::cout << A << std::endl;
	std::cout << B_BLUEB << "END" << B_END << std::endl;	
	

}