/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/05 18:13:59 by nhariman      #+#    #+#                 */
/*   Updated: 2022/08/16 19:44:58 by nhariman      ########   odam.nl         */
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
		std::cout << B_BLUE << "Make empty span of 500" << B_END << std::endl;
		Span op = Span(500);
		std::cout << B_BLUE << "Fill Span with fillSpan" << B_END << std::endl;
		op.fillSpan();
		try
		{
			std::cout << B_BLUE << "use addNumber on full list" << B_END << std::endl;
			op.addNumber(1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << B_BLUE << "use fillSpan on full list" << B_END << std::endl;
			op.fillSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << B_BLUE <<"Shortest span: (this will take a while because algo is kinda slow)\n" << B_END;
		std::cout << op.shortestSpan() << std::endl;
		std::cout << B_BLUE << "Longest span (filled with random numbers so idk...): " << B_END << op.longestSpan() << std::endl;
	}
	{
		std::cout << B_GREEN << "Make empty span of 500" << B_END << std::endl;
		Span op = Span(500);
		std::cout << B_GREEN << "Fill Span with some manual add numbers" << B_END << std::endl;
		op.addNumber(5);
		op.addNumber(6);
		std::cout << B_GREEN << "now use fillspan (should not overflow)" << B_END << std::endl;
		op.fillSpan();
		std::cout << B_GREEN <<"Shortest span: (this will take a while because algo is kinda slow)\n" << B_END;
		std::cout << op.shortestSpan() << std::endl;
		std::cout << B_GREEN << "Longest span (filled with random numbers so idk...): " << B_END << op.longestSpan() << std::endl;
	}
	{
		std::cout << B_RED << "Make empty span of 20000" << B_END << std::endl;
		Span op = Span(20000);
		std::cout << B_RED << "Fill Span with fillSpan" << B_END << std::endl;
		op.fillSpan();
		try
		{
			std::cout << B_RED << "use addNumber on full list" << B_END << std::endl;
			op.addNumber(1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << B_RED <<"Shortest span: (this will take a while because algo is kinda slow)\n" << B_END;
		std::cout << op.shortestSpan() << std::endl;
		std::cout << B_RED << "Longest span (filled with random numbers so idk...): " << B_END << op.longestSpan() << std::endl;
		
	}
	return 0;
}