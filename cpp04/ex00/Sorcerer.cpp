#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->_name = name;
	this->_title = title;
	std::cout << SH_BLUE << name << ", " << title << "is born!" << SH_END << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << SH_BLUE << this->getName() << ", " << this->getTitle() << " is dead. Consequences will never be the same!" << SH_END << std::endl;
}

std::string	Sorcerer::getName(void)
{
	return this->_name;
}

std::string	Sorcerer::getTitle(void)
{
	return this->_title;
}

ostream&	operator<< (ostream &out, const Sorcerer& sorcerer)
{
	out << SH_BLUE << "I am " << sorcerer._name << ", " << sorcerer._title << " and I like ponies!" << SH_END;
	return out;
}