#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << B_BLUE << "Initialising a FragTrap Unit." << B_END << std::endl;
	this->_hp = 100;
	this->_maxhp = 100;
	this->_maxenergy = 100;
	this->_energy = 100;
	this->_atk_m = 30; // melee attack damage
	this->_atk_r = 20; // ranged attack dmg
	this->_def= 5; //armor damage reduction
	this->_name = "FR4G-TP2";
}

FragTrap::FragTrap(std::string name)
{
	std::cout << B_BLUE << "Initialising a FragTrap Unit: " << B_END << name << std::endl;
	this->_hp = 100;
	this->_maxhp = 100;
	this->_maxenergy = 100;
	this->_energy = 100;
	this->_atk_m = 30; // melee attack damage
	this->_atk_r = 20; // ranged attack dmg
	this->_def= 5; //armor damage reduction
	this->_name = name;
	std::cout << "\"Bootup sequence initiated!\nDirective one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\"" << std::endl;
}

FragTrap::~FragTrap()
{
	if (this->_hp != 0)
		std::cout << this->_name << ": \"I can see... the code\"" << std::endl;
	std::cout << B_RED << "FragTrap unit has been repurposed into something more useful." << B_END << std::endl;
}

// std::string	FragTrap::getName()
// {
// 	return this->_name;
// }

// create a jumptable for functions
// https://www.dreamincode.net/forums/topic/223327-jump-tables-in-classes/

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int atk;

	atk = rand() % 4;
	std::cout << "> ";
	if (_hp == 0)
	{
		std::cout << _name << " will no longer tell tales... or deal any sort of damage." << std::endl;
		return ;
	}
	if (_energy < 25)
	{
		std::cout << _name << " has no energy for this." << std::endl;
		return ;
	}
	_energy = _energy - 25;
	std::cout << B_LIGHTBLUE << "Loading VaultHunter.exe . . ." << B_END << std::endl;
	std::cout << _name << " performs: " << randomAttackName(atk) << " on " << target << std::endl;
	if (atk >= 0 && atk < 2)
		rangedAttack(target);
	else if (atk >= 2 && atk < 4)
		meleeAttack(target);
	else
		beRepaired(rand() % 30);
}

std::string FragTrap::randomAttackName(int atk)
{
	std::string names[5] = {
		"Clap-In-The-Box: Your unit digistructs a large bomb",
		"Pirate Ship Mode: Your unit dons a pirate hat atop a mast and four cannons, which automatically fire to the tune of Tchaikovsky's 1812 Overture either alternately or in salvo, depending on the tempo of the music.",
		"I am rubber, you are glue",
		"Drop the Hammer",
		"Maniacal laughter"
	};

	return (names[atk]);
}
