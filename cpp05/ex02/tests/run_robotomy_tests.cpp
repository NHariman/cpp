/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   run_robotomy_tests.cpp                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/21 16:03:12 by nhariman      #+#    #+#                 */
/*   Updated: 2022/03/21 20:58:57 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/TestHeader.hpp"

void run_robotomy_tests()
{
	RobotomyRequestForm A = RobotomyRequestForm("A");

	std::cout << B_BLUEB << "Created a Bureaucrat that can sign and execute a RobotomyRequestForm" << B_END << std::endl;
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
	RobotomyRequestForm B = RobotomyRequestForm("B");
	temp.signForm(B);
	std::cout << B_BLUE << "Basic tests:" << B_END << std::endl;
	RobotomyRequestForm C = RobotomyRequestForm(B);
	std::cout << C << std::endl;
	C = A;
	std::cout << C << std::endl;
	std::cout << A << std::endl;
	std::cout << B_BLUEB << "Attempt to prove that 50 percent of the time it fails" << B_END << std::endl;
	for (int i = 0; i < 10; i++)
		guy.executeForm(A);
	std::cout << B_BLUEB << "END" << B_END << std::endl;	
	
}