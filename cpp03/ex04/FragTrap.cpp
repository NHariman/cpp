#include "ClapTrap.hpp"
#include "FragTrap.hpp"

void		FragTrap::setEnergy(void)
{
	this->_energy = 100;
	this->_maxenergy = 100;
}

void		FragTrap::setHealth(void)
{
	this->_hp = 100;
	this->_maxhp = 100;
}

void		FragTrap::setAtkM(void)
{
	this->_atk_m = 30;
}

void		FragTrap::setAtkR(void)
{
	this->_atk_r = 20;
}

void		FragTrap::setDef(void)
{
	this->_def = 5;
}

FragTrap::FragTrap()
{
	std::cout << B_BLUE << "Initialising a FragTrap Unit." << B_END << std::endl;
	this->setEnergy();
	this->setHealth();
	this->setAtkM();
	this->setAtkR();
	this->setDef();
	this->_name = "FR4G-TP2";
}

FragTrap::FragTrap(std::string name)
{
	std::cout << B_BLUE << "Initialising a FragTrap Unit: " << B_END << name << std::endl;
	setEnergy();
	setHealth();
	setAtkM();
	setAtkR();
	setDef();
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

std::string	FragTrap::randomDamageQuote(void)
{
	std::string quotes[8] = { 
	"Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!",
	"I can see through time...",
	"My servos... are seizing...",
	"I don't like this... this is making me nervous. Take a deep breath- I can't breathe! This is just a recording of someone breathing! It's not real! It's just making me more nervous!",
	"I'm detecting a motor unit malfunction... I can't move! I'm paralyzed with fear!",
	"Ow hohoho, that hurts! Yipes!",
	"Why do I even feel pain?",
	"My assets... frozen!"
	};

	return (quotes[rand() % 7]);
}

std::string	FragTrap::randomHealQuote(void)
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

std::string	FragTrap::randomRangedQuote(void)
{
	std::string quotes[8] = { 
	"You're listening to \'Short-Range Damage Radio\'.",
	"Things are exploded and... stuff.",
	"Take that! And that... and that...",
	"Exploooooosions!",
	"Know what killed the baddies? The Ice age.",
	"I've finally got an electric personality!",
	"Remember, use caution near an open flame!",
	"Take two bullets, then call me in the morning."
	};

	return (quotes[rand() % 7]);
}

std::string	FragTrap::randomMeleeQuote(void)
{
	std::string quotes[8] = { 
	"This is why you do your homework!",
	"Pain school is now in session.",
	"Guess who?",
	"Meet professor punch!",
	"Ready for the PUNCHline?!",
	"One, two punch",
	"Sting like a butterfly!",
	"Hyperiooooon Punch!"
	};

	return (quotes[rand() % 7]);
}