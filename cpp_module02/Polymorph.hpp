#ifndef Polymorph_h
# define Polymorph_h

#include <string>
#include <iostream>

#include "ASpell.hpp"

class Polymorph : public ASpell {
	public:
		Polymorph();
		~Polymorph();

		ASpell* clone() const;
};

#endif
