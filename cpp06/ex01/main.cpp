/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 15:28:51 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/12 22:13:56 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "inc/serialization.hpp"
#include "inc/Data.hpp"


int		main(void)
{
	Data*		ptr;
	uintptr_t	raw;

	std::cout << "Address of ptr: " << ptr << std::endl;
	raw = serialize(ptr);
	std::cout << "Testing serialize(ptr): " << raw << std::endl;


	Data*	ptr2;
	std::cout << "ptr2 before using deserialize: " << ptr2 << std::endl;
	ptr2 = deserialize(raw);
	std::cout << "Address of ptr2, after deserialize(raw): " << ptr2 << std::endl;
	
	std::cout << "Ptr and ptr2 now have the same address" << std::endl;
	std::cout << ptr << " Address of ptr"  << std::endl;
	std::cout << ptr2 <<  " Address of ptr2" << std::endl;
	return (0);
}