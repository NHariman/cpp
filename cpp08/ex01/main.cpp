/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/05 18:13:59 by nhariman      #+#    #+#                 */
/*   Updated: 2022/05/05 19:53:31 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "colours.hpp"

int		main(void)
{
	//using scopes now
	{
		std::cout << B_RED << "Create a Span class of 5" << B_END << std::endl;
		Span	sp = Span(5);
	
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.printList();
	
		std::cout << "Shortest span (should be 2): " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span (should be 14): " << sp.longestSpan() << std::endl;
		try
		{
			std::cout << B_RED << "use addNumber on full list" << B_END << std::endl;
			sp.addNumber(1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	// trying all the stuff that should fail
	{
		try
		{
			std::cout << B_RED << "test Span badspan(0)" << B_END << std::endl;
			Span badspan(0);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::cout << B_RED << "test Span badspan(-1)" << B_END << std::endl;
			Span badspan(-1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::cout << B_RED << "test Span badspan(1)" << B_END << std::endl;
			Span badspan(1);
			try
			{
				std::cout << "Shortest span: " << badspan.shortestSpan() << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			try
			{
				std::cout << "Longest span: " << badspan.longestSpan() << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}			
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::cout << B_RED << "test Span badspan(12), with only 1 number inserted" << B_END << std::endl;
			Span badspan(12);

			badspan.addNumber(6);
			try
			{
				std::cout << "Shortest span: " << badspan.shortestSpan() << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			try
			{
				std::cout << "Longest span: " << badspan.longestSpan() << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}	
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::cout << B_RED << "test Span badspan(12), with 2 numbers inserted" << B_END << std::endl;
			Span badspan(12);

			badspan.addNumber(6);
			badspan.addNumber(12);
			try
			{
				std::cout << "Shortest span: " << badspan.shortestSpan() << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			try
			{
				std::cout << "Longest span: " << badspan.longestSpan() << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}	
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	//filling time
	{
		std::cout << B_RED << "Make empty span of 10" << B_END << std::endl;
		Span op = Span(10);
		std::cout << B_RED << "Fill Span with fillSpan" << B_END << std::endl;
		op.fillSpan();
		std::cout << B_RED << "Print Span" << B_END << std::endl;
		op.printList();

	}
	return 0;
}