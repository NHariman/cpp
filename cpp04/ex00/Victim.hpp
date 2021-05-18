#ifndef VICTIM_HPP
# define VICTIM_HPP

class Victim
{
	private:
		std::string _name;
		std::string _title;
		Victim();
	public:
		Victim(std::string name, std::string title);
		~Victim();
		Victim(const Victim&);
		Victim& = (const Victim& Victim);
		std::string	getName();
		void		getIntro();
		void		getPolymorphed(void) const;
}

#endif