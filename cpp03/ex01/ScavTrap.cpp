#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << B_YELLOWB << "Initialising a ScavTrap Unit." << B_END << std::endl;
	_hp = 100;
	_energy = 50;
	_lvl = 1;
	_atk_m = 20; // melee attack damage
	_atk_r = 15; // ranged attack dmg
	_def= 3; //armor damage reduction
	_name = "H3LL0W0RLD";
	std::cout << "\"Bootup sequence initiated! I'm sure this'll go fine\"" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name)
{
	std::cout << B_BLUE << "Initialising a ScavTrap Unit: " << B_END << name << std::endl;
	_hp = 100;
	_energy = 100;
	_lvl = 1;
	_atk_m = 30; // melee attack damage
	_atk_r = 20; // ranged attack dmg
	_def= 5; //armor damage reduction
	std::cout << "\"Bootup sequence initiated! I'm sure this'll go fine\"" << std::endl;
}

ScavTrap::~ScavTrap()
{
	if (this->_hp != 0)
		std::cout << this->_name << ": \"Tell my mother I loved her, oh god.. I don't even have a mother...\"" << std::endl;
	std::cout << B_PURPLE << "ScavTrap unit has been repurposed into a cupholder." << B_END << std::endl;
}

std::string	ScavTrap::getName()
{
	return this->_name;
}

void ScavTrap::setName(std::string name)
{
	this->_name = name;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "> ";
	if (this->_hp == 0)
	{
		std::cout << this->_name << " is no longer operational." << std::endl;
		return ;
	}
	std::cout << this->_name << ": " << randomRangedQuote() << std::endl;
	std::cout << B_LIGHTBLUEB << "FR4G-TP " << this->_name << " performs a ranged attack on " << target << B_END << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "> ";
	if (this->_hp == 0)
	{
		std::cout << this->_name << " cannot attack on account of being a pile of rubble." << std::endl;
		return ;
	}
	std::cout << this->_name << ": " << randomMeleeQuote() << std::endl;
	std::cout << B_RED << "FR4G-TP " << this->_name << " performs a melee attack on " << target << B_END << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int	damage;

	std::cout << "> ";
	if (this->_hp == 0)
	{
		std::cout << B_YELLOWB << "Beating a dead horse has never been so fun huh? " << this->_name << " is already dead!!" << B_END << std::endl;
		return ;
	}
	if (amount > this->_hp)
		damage = this->_hp;
	else
		damage = amount;
	this->_hp = this->_hp - damage;
	std::cout << this->_name << " takes " << damage << " damage." << std::endl;
	std::cout << this->_name << ": " << randomDamageQuote() << std::endl;
	if (this->_hp == 0)
		std::cout << B_YELLOWB << this->_name << " has fallen apart! (GAME OVER)" << B_END << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int	heal;

	std::cout << "> ";
	if (this->_hp == 0)
	{
		std::cout << "... *kicks " << this->_name << "* ... yeah sorry bud that's broken for good." << std::endl;
		return ;
	}
	
	std::cout << this->_name << ": " << randomHealQuote() << std::endl;
	std::cout << B_GREENB << "FR4G-TP " << this->_name << " did some selfcare." << B_END << std::endl;
	if (this->_hp + amount > this->_maxhp)
		heal = this->_maxhp - this->_hp;
	else
		heal = amount;
	this->_hp = this->_hp + heal;
	std::cout << "Healed: " << heal << " HP." <<std::endl;
	std::cout << this->_name << " has " << this->_hp << "/" << this->_maxhp << " HP." << std::endl;
	
}

// create a jumptable for functions
// https://www.dreamincode.net/forums/topic/223327-jump-tables-in-classes/

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	int atk;

	atk = rand() % 4;
	std::cout << "> ";
	if (this->_hp == 0)
	{
		std::cout << this->_name << " it's hard to listen to a pile of scrap." << std::endl;
		return ;
	}
	std::cout << B_LIGHTBLUE << "A challenger appears . . ." << B_END << std::endl;
	std::cout << this->_name << " asks: " << target << " to " << randomQuestName(atk)<< std::endl;
}

std::string ScavTrap::randomQuestName(int nb)
{
	std::string names[5] = {
		"bring back about a barrel of pinkie fingers, don\'t ask why.",
		"get Handsome Jack\'s autograph! Bonus if you can get some of his hair.",
		"kill about 5 vault hunters and return with their loot. It won't take no for an answer.",
		"juggle 10 live grenades.",
		"give it a hug."
	};
	return (names[nb]);
}

std::string	ScavTrap::randomDamageQuote(void)
{
	std::string quotes[8] = { 
	"Save me from the Badass!",
	"Aaaaaaahhh!",
	"My servos... are seizing...",
	"I can't feel my fingers! Gah! I don't have any fingers!",
	"If only my chassis... weren't made of recycled human body parts! Wahahaha!",
	"Extra ouch!",
	"Holy moly!",
	"Yikes!"
	};

	return (quotes[rand() % 7]);
}

std::string	ScavTrap::randomHealQuote(void)
{
	std::string quotes[8] = { 
	"Health! Eww, what flavor is red?",
	"Sweet life juice!",
	"Healsies!",
	"Ya feeling lucky, punk?",
	"Gimme your best shot.",
	"Insert Juggernaut quote or pun here.",
	"Hit me, baby!",
	"Why do I feel radioactive!?"
	};

	return (quotes[rand() % 7]);
}

std::string	ScavTrap::randomRangedQuote(void)
{
	std::string quotes[8] = { 
	"I am a tornado of death and bullets!",
	"Stop me before I kill again, except don't!",
	"Ha ha ha! Fall before your robot overlord!",
	"Can't touch this!",
	"Ha! Keep 'em coming!",
	"There is no way this ends badly!",
	"This is why I was built!",
	"Not so tough after all!"
	};

	return (quotes[rand() % 7]);
}

std::string	ScavTrap::randomMeleeQuote(void)
{
	std::string quotes[8] = { 
		"Not so tough after all!",
		"One down, any other takers?",
		"I have gaskets tougher than you!",
		"That was me! I did that!",
		"Like running over a bug!",
		"Don't tell me that wasn't awesome!",
		"Ha ha ha! Suck it!",
		"Take a chill pill!"
	};

	return (quotes[rand() % 7]);
}