/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/16 19:17:52 by nhariman      #+#    #+#                 */
/*   Updated: 2022/05/16 19:52:14 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <stack>

int		main(void)
{
	MutantStack<int>	mstack;

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
	return 0;
}