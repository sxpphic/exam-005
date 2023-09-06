#include "Warlock.hpp"

Warlock::Warlock(const std::string& name , const std::string& title) : _name(name), _title(title) { 
	std::cout << getName() << ": This looks like another boring day." << std::endl; 
};
Warlock::~Warlock() {
	std::cout << getName() << ": My job here is done!" << std::endl; 
};
const std::string&     Warlock::getName() const {return _name;};
const std::string&     Warlock::getTitle() const {return _title;};
void Warlock::setTitle(const std::string& title) { _title = title;} ;

void            Warlock::introduce() const {
	std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl; 
};

void Warlock::learnSpell(ASpell* spell) {
	spell_book.learnSpell(spell);
};
void Warlock::forgetSpell(std::string spell) {
	spell_book.forgetSpell(spell);
};
void Warlock::launchSpell(std::string spell, const ATarget& target) {
	ASpell* my_spell = spell_book.createSpell(spell);
	if (my_spell != NULL) {
		target.getHitBySpell(*my_spell);	
	}	
};

