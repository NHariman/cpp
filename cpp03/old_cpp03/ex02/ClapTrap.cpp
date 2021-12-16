#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << B_YELLOWB << "Initialising a ClapTrap Unit." << B_END << std::endl;
	_hp = 100;
	_lvl = 1;
	_name = "CL4P-TP";
	std::cout << "\"Bootup sequence initiated! I'm sure this'll go fine\"" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << B_BLUE << "Initialising a ClapTrap Unit: " << B_END << name << std::endl;
	_hp = 100;
	_lvl = 1;
	std::cout << "\"Bootup sequence initiated! I'm sure this'll go fine\"" << std::endl;
}

ClapTrap::~ClapTrap()
{
	// if (this->_hp != 0)
	// 	std::cout << this->_name << ": \"Tell my mother I loved her, oh god.. I don't even have a mother...\"" << std::endl;
	std::cout << B_LIGHTBLUEB << "ClapTrap unit has been scrapped for parts." << B_END << std::endl;
}

std::string	ClapTrap::getName()
{
	return this->_name;
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "> ";
	if (this->_hp == 0)
	{
		std::cout << this->_name << " does not respond." << std::endl;
		return ;
	}
	std::cout << this->_name << ": " << randomRangedQuote() << std::endl;
	std::cout << B_LIGHTBLUEB << "FR4G-TP " << this->_name << " performs a ranged attack on " << target << B_END << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "> ";
	if (this->_hp == 0)
	{
		std::cout << this->_name << " would attack if it could, but it can\'t." << std::endl;
		return ;
	}
	std::cout << this->_name << ": " << randomMeleeQuote() << std::endl;
	std::cout << B_RED << "FR4G-TP " << this->_name << " performs a melee attack on " << target << B_END << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	damage;

	std::cout << "> ";
	if (this->_hp == 0)
	{
		std::cout << B_YELLOWB << "Kicking " << this->_name << "\'s remains is a bit cruel don't you think?" << B_END << std::endl;
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
		std::cout << B_YELLOWB << this->_name << " has broken! (GAME OVER)" << B_END << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	heal;

	std::cout << "> ";
	if (this->_hp == 0)
	{
		std::cout << this->_name << " cannot be repaired at this point." << std::endl;
		return ;
	}
	
	std::cout << this->_name << ": " << randomHealQuote() << std::endl;
	std::cout << B_GREENB << "FR4G-TP " << this->_name << " drank motor oil or something." << B_END << std::endl;
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

std::string	ClapTrap::randomDamageQuote(void)
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

std::string	ClapTrap::randomHealQuote(void)
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

std::string	ClapTrap::randomRangedQuote(void)
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

std::string	ClapTrap::randomMeleeQuote(void)
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