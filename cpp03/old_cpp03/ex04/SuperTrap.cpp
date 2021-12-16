#include "ClapTrap.hpp"
#include "SuperTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

SuperTrap::SuperTrap(void)
{
	std::cout << B_PURPLEB << "Initialising a SuperTrap Unit." << B_END << std::endl;
	FragTrap::setHealth();
	NinjaTrap::setEnergy();
	NinjaTrap::setAtkM();
	FragTrap::setAtkR();
	FragTrap::setDef();
	this->_name = "SUPR-TP";
}

SuperTrap::SuperTrap(std::string name)
{
	std::cout << B_PURPLEB << "Initialising a SuperTrap Unit." << B_END << std::endl;
	FragTrap::setHealth();
	NinjaTrap::setEnergy();
	NinjaTrap::setAtkM();
	FragTrap::setAtkR();
	FragTrap::setDef();
	this->_name = name;
}

SuperTrap::~SuperTrap()
{
	std::cout << B_PURPLEB << "SuperTrap Unit destroyed." << B_END << std::endl;	
}

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::vaulthunter_dot_exe(std::string const &target)
{
	FragTrap::vaulthunter_dot_exe(target);
}

void SuperTrap::ninjaShoebox(ClapTrap & target)
{
	NinjaTrap::ninjaShoebox(target);
}