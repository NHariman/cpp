#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

/*
	Types of STL containers:
	- Vector, aka sequential container. allows for printing things sequentially
		https://www.programiz.com/cpp-programming/stl-containers
		TYPES: Vector, Array (CPP 11), Deque, List, Forward List

	- Set, In C++, associative containers allow us to store elements in sorted order. The order doesn't depend upon when the element is inserted.
		used mostly in binary tree implementations
		In the output, we see that the numbers are sorted in ascending order with duplicate numbers removed.
		TYPES: Set, Map, Multiset, Multimap

	- Unordered_set, STL Unordered Associative Containers provide the unsorted versions of the associative container.
		used in implementing hash table data structures
		In output, when printing, duplicates are removed but no sorting is done.
		TYPES: Set, Map, Multiset, Multimap

	ranged for loop for printing results: for(auto &num: numbers)

	typename vs class: https://pages.cs.wisc.edu/~driscoll/typename.html
*/

template <class T>
int		easyfind(T list, int find)
{
	for (auto &unit: list)
	{
		if (unit == find)
			return unit;
	}
	throw OutOfBoundsException();
}

class OutOfBoundsException : public std::exception
{
	public:
	const char *what() const throw()
	{
		return "Value not found.";
	}
}

#endif