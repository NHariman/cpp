/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/14 00:06:02 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/14 23:19:50 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

class Replace
{
	private:
		std::string *_text;
		std::string _s1;
		std::string _s2;
	public:
		Replace();
		~Replace();
		void	setText(std::string &text);
		std::string	getText();
		void	setStr(char *s1, char *s2);
		void	swapText();
		int	makeFile(char *file);
};

#endif
