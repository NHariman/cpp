#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << B_YELLOWB << "Initialising a ScavTrap Unit." << B_END << std::endl;
	this->_hp = 100;
	this->_maxhp = 100;
	this->_maxenergy = 100;
	this->_energy = 50;
	this->_atk_m = 20; // melee attack damage
	this->_atk_r = 15; // ranged attack dmg
	this->_def= 3; //armor damage reduction
	this->_name = "H3LL0W0RLD";
	std::cout << "\"Bootup sequence initiated! I'm sure this'll go fine\"" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << B_BLUE << "Initialising a ScavTrap Unit: " << B_END << name << std::endl;
	this->_hp = 100;
	this->_maxhp = 100;
	this->_maxenergy = 100;
	this->_energy = 50;
	this->_atk_m = 30; // melee attack damage
	this->_atk_r = 20; // ranged attack dmg
	this->_def= 5; //armor damage reduction
	this->_name = name;
	std::cout << "\"Bootup sequence initiated! I'm sure this'll go fine\"" << std::endl;
}

ScavTrap::~ScavTrap()
{
	if (this->_hp != 0)
		std::cout << this->_name << ": \"Tell my mother I loved her, oh god.. I don't even have a mother...\"" << std::endl;
	std::cout << B_PURPLE << "ScavTrap unit has been repurposed into a cupholder." << B_END << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	int atk;

	atk = rand() % 4;
	std::cout << "> ";
	if (_hp == 0)
	{
		std::cout << _name << " it's hard to listen to a pile of scrap." << std::endl;
		return ;
	}
	std::cout << B_LIGHTBLUE << "A challenger appears . . ." << B_END << std::endl;
	std::cout << _name << " asks: " << target << " to " << randomQuestName(atk)<< std::endl;
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
