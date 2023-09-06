#ifndef SpellBook_h
# define SpellBook_h

#include <string>
#include <iostream>
#include <map>

#include "Dummy.hpp"
#include "Fwoosh.hpp"

class SpellBook {
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell* spell);
		void forgetSpell(const std::string& spell);
		ASpell* createSpell(const std::string& spell);

	private:
		std::map<std::string, ASpell*>	spell_map;

};

#endif
