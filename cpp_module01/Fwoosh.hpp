#ifndef Fwoosh_h
# define Fwoosh_h

#include <string>
#include <iostream>

#include "ASpell.hpp"

class Fwoosh : public ASpell {
	public:
		Fwoosh();
		~Fwoosh();

		ASpell* clone() const;
};

#endif
