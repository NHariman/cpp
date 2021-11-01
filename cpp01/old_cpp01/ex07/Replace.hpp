/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/14 00:06:02 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/15 23:03:15 by nhariman      ########   odam.nl         */
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
		std::string *_text; // a pointer as this text is gotten from another source
		std::string _s1; // standard string as it is directly saved
		std::string _s2; // directly saved
	public:
		Replace();
		~Replace();
		void	setText(std::string &text); // take the address of text and store it in the pointer
		std::string	getText();
		void	setStr(char *s1, char *s2);
		void	swapText();
		int		makeFile(char *file); // use the original file name to create the new file and fill it
};

#endif
