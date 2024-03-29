/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/14 00:06:27 by nhariman      #+#    #+#                 */
/*   Updated: 2021/12/08 21:44:20 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace()
{}

Replace::~Replace()
{}

void		Replace::setText(std::string &text)
{
	this->_text = &text;
}
std::string	Replace::getText()
{
	return *this->_text;
}

int		Replace::setStr(char *s1, char *s2)
{
	this->_s1 = std::string(s1);
	this->_s2 = std::string(s2);
	if (!this->_s1.compare(this->_s2))
		return (0);
	return (1);
}

void 		Replace::swapText()
{
	int 		len = this->_s1.length();
	std::size_t	found = this->_text->find(this->_s1);


	//this->_text->replace(found, len, this->_s2);
	while (found != std::string::npos)
	{
		this->_text->erase(found, len);
		this->_text->insert(found, this->_s2);
		found += this->_s2.length();
		found = this->_text->find(this->_s1, found);
	}
}

int		Replace::makeFile(char *file)
{
	std::string f;

	f = std::string(file);
	f.append(".replace");

	std::ofstream newfile(f);
	if (newfile.is_open())
	{
		newfile << *this->_text;
		newfile.close();
		return (0);
	}
	else
		std::cout << "Error, unable to write to file\n";
	return (1);	
}
