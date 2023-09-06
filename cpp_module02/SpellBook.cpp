#include "SpellBook.hpp"

SpellBook::SpellBook() { 
};
SpellBook::~SpellBook() {
};

void SpellBook::learnSpell(ASpell* spell) {
	spell_map[spell->getName()] = spell;
};
void SpellBook::forgetSpell(const std::string& spell) {
	spell_map.erase(spell);
};

ASpell* SpellBook::createSpell(const std::string& spell) {	
	if (spell_map.find(spell) != spell_map.end()) {
		return (spell_map[spell]);
	}
	return (NULL);
};
