#ifndef Warlock_h
# define Warlock_h

#include <string>
#include <iostream>
#include <map>

#include "Dummy.hpp"
#include "Fwoosh.hpp"

class Warlock {
	public:
		Warlock(const std::string& name, const std::string& title);
		~Warlock();
		const std::string&	getName() const;
		const std::string&	getTitle() const;
		void setTitle(const std::string& title);

		void		introduce() const; 

		void learnSpell(ASpell* spell);
		void forgetSpell(std::string spell);
		void launchSpell(std::string spell, const ATarget& target);

	private:
		std::string _name;
		std::string _title;
		std::map<std::string, ASpell*>	spell_map;

};

#endif
