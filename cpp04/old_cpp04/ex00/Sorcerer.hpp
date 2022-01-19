#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <cstdlib>

class Sorcerer
{
	private:
		std::string _name;
		std::string _title;
		Sorcerer();
	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer();
		Sorcerer(const Sorcerer&);
		Sorcerer& = (const Sorcerer& Sorcerer);
		std::string	getName();
		std::string	getTitle();
		void		getIntro();
}

#endif