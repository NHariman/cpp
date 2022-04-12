/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   serialization.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/12 20:49:46 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/12 21:11:44 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include "../inc/Data.hpp"

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif