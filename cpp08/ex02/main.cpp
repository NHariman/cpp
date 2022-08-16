/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/16 19:17:52 by nhariman      #+#    #+#                 */
/*   Updated: 2022/08/16 19:56:32 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "colours.hpp"
#include <stack>
#include <list>

int		main(void)
{
	std::cout << "First try with Mutant Stack" << std::endl;
	{	
		MutantStack<int>	mstack;
		std::cout << B_BLUE << "Trying to pop or use top when there is nothing in the stack yet. Throws an error." << B_END << std::endl;
		try
		{
			mstack.pop();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			mstack.top();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << B_BLUE << "Create a stack with 17, 5" << B_END << std::endl;
		mstack.push(5);
		mstack.push(17);
		std::cout << B_BLUE << "mstack.size(), should be 2 now: " << B_END << mstack.size() << std::endl;

		std::cout << B_BLUE << "mstack.top(), get last pushed int: " << B_END << mstack.top() << std::endl;

		std::cout << B_BLUE << "pop 17 out of stack with mstack.pop()" << B_END << std::endl;
		mstack.pop();

		std::cout << B_BLUE << "mstack.size(), should be 1 now: " << B_END << mstack.size() << std::endl;

		std::cout << B_BLUE << "push onto stack" << B_END << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		std::cout << B_BLUE << "Printing values, 5, 3, 5, 737, 0" << B_END << std::endl;
		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	std::cout << B_BLUE << "**Now try with list**" << B_END << std::endl;
	{	
		std::list<int>	mstack;
		std::cout << B_BLUE << "Create a stack with 17, 5" << B_END << std::endl;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << B_BLUE << "mstack.size(), should be 2 now: " << B_END << mstack.size() << std::endl;

		std::cout << B_BLUE << "mstack.top(), get last pushed int: " << B_END << mstack.front() << std::endl;

		std::cout << B_BLUE << "pop 17 out of stack with mstack.pop()" << B_END << std::endl;
		mstack.pop_back();

		std::cout << B_BLUE << "mstack.size(), should be 1 now: " << B_END << mstack.size() << std::endl;

		std::cout << B_BLUE << "push onto stack: " << B_END << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;
		std::cout << B_BLUE << "Printing values, 5, 3, 5, 737, 0" << B_END << std::endl;
		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return 0;
}