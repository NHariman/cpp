/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printContent.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/13 21:41:27 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/13 22:22:59 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTCONTENT_HPP
#define PRINTCONTENT_HPP

#include <iostream>

template <typename T>
void	printContent(T content)
{
	std::cout << content << std::endl;
}

#endif