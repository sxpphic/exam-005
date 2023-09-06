#ifndef Fireball_h
# define Fireball_h

#include <string>
#include <iostream>

#include "ASpell.hpp"

class Fireball : public ASpell {
	public:
		Fireball();
		~Fireball();

		ASpell* clone() const;
};

#endif
