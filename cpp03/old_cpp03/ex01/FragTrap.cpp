#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << B_BLUE << "Initialising a FragTrap Unit." << B_END << std::endl;
	_hp = 100;
	_energy = 100;
	_lvl = 1;
	_atk_m = 30; // melee attack damage
	_atk_r = 20; // ranged attack dmg
	_def= 5; //armor damage reduction
	std::cout << "Please name your unit before you proceed." << std::endl;
}

FragTrap::FragTrap(std::string name) : _name(name)
{
	std::cout << B_BLUE << "Initialising a FragTrap Unit: " << B_END << name << std::endl;
	_hp = 100;
	_energy = 100;
	_lvl = 1;
	_atk_m = 30; // melee attack damage
	_atk_r = 20; // ranged attack dmg
	_def= 5; //armor damage reduction
	std::cout << "\"Bootup sequence initiated!\nDirective one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\"" << std::endl;
}

FragTrap::~FragTrap()
{
	if (this->_hp != 0)
		std::cout << this->_name << ": \"I can see... the code\"" << std::endl;
	std::cout << B_RED << "FragTrap unit has been repurposed into something more useful." << B_END << std::endl;
}

std::string	FragTrap::getName()
{
	return this->_name;
}

void FragTrap::setName(std::string name)
{
	this->_name = name;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "> ";
	if (this->_hp == 0)
	{
		std::cout << this->_name << " would attack... if it could. But it can't because it's dead." << std::endl;
		return ;
	}
	std::cout << this->_name << ": " << randomRangedQuote() << std::endl;
	std::cout << B_YELLOW << "FR4G-TP " << this->_name << " performs a ranged attack on " << target << B_END << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "> ";
	if (this->_hp == 0)
	{
		std::cout << this->_name << " cannot attack on account of being a pile of rubble." << std::endl;
		return ;
	}
	std::cout << this->_name << ": " << randomMeleeQuote() << std::endl;
	std::cout << B_PURPLE << "FR4G-TP " << this->_name << " performs a melee attack on " << target << B_END << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	unsigned int	damage;

	std::cout << "> ";
	if (this->_hp == 0)
	{
		std::cout << B_REDB << "Oh my god, stop! " << this->_name << " is already dead!!" << B_END << std::endl;
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
		std::cout << B_RED << this->_name << " has exploded! (GAME OVER)" << B_END << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	unsigned int	heal;

	std::cout << "> ";
	if (this->_hp == 0)
	{
		std::cout << "All the king's horses and all the king's men couldn't put " << this->_name << " back together again tbh." << std::endl;
		return ;
	}
	
	std::cout << this->_name << ": " << randomHealQuote() << std::endl;
	std::cout << B_GREEN << "FR4G-TP " << this->_name << " repaired itself." << B_END << std::endl;
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

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int atk;

	atk = rand() % 4;
	std::cout << "> ";
	if (this->_hp == 0)
	{
		std::cout << this->_name << " will no longer tell tales... or deal any sort of damage." << std::endl;
		return ;
	}
	if (this->_energy < 25)
	{
		std::cout << this->_name << " has no energy for this." << std::endl;
		return ;
	}
	this->_energy = this->_energy - 25;
	std::cout << B_LIGHTBLUE << "Loading VaultHunter.exe . . ." << B_END << std::endl;
	std::cout << this->_name << " performs: " << randomAttackName(atk) << " on " << target << std::endl;
	if (atk >= 0 && atk < 2)
		this->rangedAttack(target);
	else if (atk >= 2 && atk < 4)
		this->meleeAttack(target);
	else
		this->beRepaired(rand() % 30);
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