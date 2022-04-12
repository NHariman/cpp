/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/07 19:43:49 by nhariman      #+#    #+#                 */
/*   Updated: 2022/04/12 17:54:46 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <string>
#include <locale>

int			input_validation(std::string input, char *suffix_check);
int			int_check(std::string input);
int			char_check(std::string input);

#endif