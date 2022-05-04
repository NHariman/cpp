#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

/*
	on STL (Standard Template Libary) containers:
	https://www.geeksforgeeks.org/containers-cpp-stl/
	https://www.programiz.com/cpp-programming/stl-containers

	Types of STL containers:
	- Sequential container. allows for printing things sequentially
		TYPES: Vector, Array (CPP 11), Deque, List, Forward List (CPP 11)

	- Associative containers allow us to store elements in sorted order. The order doesn't depend upon when the element is inserted.
		used mostly in binary tree implementations
		In the output, we see that the numbers are sorted in ascending order with duplicate numbers removed.
		TYPES: Set, Map, Multiset, Multimap

	- Unordered Associative Containers provide the unsorted versions of the associative container.
		used in implementing hash table data structures
		In output, when printing, duplicates are removed but no sorting is done.
		TYPES: Set, Map, Multiset, Multimap

	- Container adaptors provide a different interface for sequential containers
		TYPES: stack, queue, priority_queue

	because we can't use auto due to it being c++11, here is how to iterate over a container:
		position = container.begin(); position != container.end(); position++

	// in order for a template to accept a container, get it to accept the iterators of the containers
	// http://www.java2s.com/Tutorial/Cpp/0260__template/templatefunctiontoprintelementsofanSTLcontainer.htm

	typename vs class: https://pages.cs.wisc.edu/~driscoll/typename.html
*/



template <typename T>
int		easyfind(const T& container, int find)
{
	typename T::const_iterator pos;
	typename T::const_iterator end(container.end());

	for (pos = container.begin(); pos != end; pos++)
	{
		if (*pos == find)
			return *pos;
	}
	throw "Value not found.";
}

#endif