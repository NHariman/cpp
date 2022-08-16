#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <iostream>
#include <string>
#include "easyfind.hpp"
#include "colours.hpp"

int		main(void)
{
	{	
		std::cout << B_BLUEB << "Vector check" << B_END << std::endl;
		std::vector<int> vect;
		for (int i=1; i<=5; i++) vect.push_back(i);
		std::cout << B_BLUE << "Create a Vector with numbers 1 to 5 and print them:" << B_END << std::endl;
		for (std::vector<int>::iterator it = vect.begin() ; it != vect.end(); it++)
			std::cout << *it;
		std::cout << std::endl;
		std::cout << B_BLUE << "Use easyfind function to find the 3 and print it:" << B_END << std::endl;
		
		int result;
		result = easyfind(vect, 3);
		std::cout << result << std::endl;
		std::cout << B_BLUE << "Use easyfind function to find a number not listed and catch the error (a const char string):" << B_END << std::endl;
		try
		{
			easyfind(vect, 10);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << B_YELLOWB << "Deque check" << B_END << std::endl;
		std::cout << B_YELLOW << "Create a deque list of random numbers" << B_END << std::endl;
		std::deque<int> gquiz;
    	gquiz.push_back(10);
    	gquiz.push_front(20);
    	gquiz.push_back(30);
    	gquiz.push_front(15);
   		std::deque<int>::iterator it;
   		for (it = gquiz.begin(); it != gquiz.end(); ++it)
   		    std::cout << '\t' << *it;
   		std::cout << '\n';
		std::cout << B_YELLOW << "use easyfind to find the 15" << B_END << std::endl;
		std::cout << easyfind(gquiz, 15) << std::endl;
		std::cout << B_YELLOW << "Use easyfind function to find a number not listed and catch the error (a const char string):" << B_END << std::endl;
		try
		{
			easyfind(gquiz, 100);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << B_GREENB << "list check" << B_END << std::endl;
		std::cout << B_GREEN << "Create a list of random numbers" << B_END << std::endl;
		std::list<int> l;
		l.push_back(1);
		l.push_back(10);
		l.push_back(154);
		l.push_back(123);
		l.push_back(11);
		std::list<int>::iterator it;
		for (it = l.begin(); it != l.end(); ++it)
			std::cout << "\t" << *it;
		std::cout << std::endl;
		std::cout << B_GREEN << "Find number 123" << B_END << std::endl;
		std::cout << easyfind(l, 123) << std::endl;
		std::cout << B_GREEN << "Find nonexistent number" << B_END << std::endl;
		try
		{
			easyfind(l, 100);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}