#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	std::cout << B_GREENB << "Initialising a NinjaTrap Unit." << B_END << std::endl;
	this->_hp = 60;
	this->_maxhp = 60;
	this->_energy = 120;
	this->_maxenergy = 120;
	this->_name = "N1NJ4-TP";
	this->_atk_m = 60;
	this->_atk_r = 5;
	this->_def = 0;

}

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << B_GREENB << "Initialising a NinjaTrap Unit named: " << B_END << name << std::endl;
	this->_hp = 60;
	this->_maxhp = 60;
	this->_energy = 120;
	this->_maxenergy = 120;
	this->_name = name;
	this->_atk_m = 60;
	this->_atk_r = 5;
	this->_def = 0;
}

NinjaTrap::~NinjaTrap()
{
	if (this->_hp != 0)
		std::cout << this->_name << ": \"Please water my plants when I'm gone.\"" << std::endl;
	std::cout << B_BLUEB << "NinjaTrap unit has been made into a firepit for the homeless." << B_END << std::endl;

}

void	NinjaTrap::ninjaShoebox(ClapTrap & target)
{
	int atk;

	atk = rand() % 2;
	std::cout << _name << " attacks " << target.getName() << std::endl;
	if (atk == 0)
	{
		meleeAttack(target.getName());
		target.takeDamage(_atk_m - target.getDef());
	}
	else if (atk == 1)
	{
		rangedAttack(target.getName());
		target.takeDamage(_atk_r - target.getDef());
	}
	else
		beRepaired(rand() % 30);
}