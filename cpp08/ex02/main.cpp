/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/16 19:17:52 by nhariman      #+#    #+#                 */
/*   Updated: 2022/05/17 15:40:21 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <stack>
#include <list>

int		main(void)
{
	std::cout << "First try with Mutant Stack" << std::endl;
	{	
		MutantStack<int>	mstack;
		std::cout << "Trying to pop or use top when there is nothing in the stack yet. Throws an error." << std::endl;
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
		std::cout << "Create a stack with 17, 5" << std::endl;
		mstack.push(5);
		mstack.push(17);
		std::cout << "mstack.size(), should be 2 now: " << mstack.size() << std::endl;

		std::cout << "mstack.top(), get last pushed int: " << mstack.top() << std::endl;

		std::cout << "pop 17 out of stack with mstack.pop()" << std::endl;
		mstack.pop();

		std::cout << "mstack.size(), should be 1 now: " << mstack.size() << std::endl;

		std::cout << "push onto stack: 3, 5, 737, 0" << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		std::cout << "Printing values, in order: 17, 3, 5, 737, 0" << std::endl;
		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	std::cout << "**Now try with list**" << std::endl;
	{	
		std::list<int>	mstack;
		std::cout << "Create a stack with 17, 5" << std::endl;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << "mstack.size(), should be 2 now: " << mstack.size() << std::endl;

		std::cout << "mstack.top(), get last pushed int: " << mstack.front() << std::endl;

		std::cout << "pop 17 out of stack with mstack.pop()" << std::endl;
		mstack.pop_back();

		std::cout << "mstack.size(), should be 1 now: " << mstack.size() << std::endl;

		std::cout << "push onto stack: 3, 5, 737, 0" << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;
		std::cout << "Printing values, in order: 17, 3, 5, 737, 0" << std::endl;
		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return 0;
}