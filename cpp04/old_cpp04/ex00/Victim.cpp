#include "Victim.hpp"

Victim::Victim(std::string name, std::string title)
{
	this->_name = name;
	std::cout << SH_RED << "Some random victim named " name << " just appeared!" << SH_END << std::endl;
}

Victim::~Victim(void)
{
	std::cout << SH_RED << "Victim " << this->getName() << " just died for no apparent reason!" << SH_END << std::endl;
}

std::string	Victim::getName(void)
{
	return this->_name;
}

void		Victim::getIntro(void)
{
	std::cout << SH_RED << "I'm' " << this->getName() << ", " << this->getTitle() << " and I like otters!" << SH_END << std::endl;
}