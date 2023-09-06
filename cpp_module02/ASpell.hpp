#ifndef ASpell_h
# define ASpell_h

#include <string>
#include <iostream>

#include "ATarget.hpp"

class ATarget;

class ASpell {
	public:
		ASpell(const std::string& name, const std::string& effects);
		virtual ~ASpell();
		const std::string&	getName() const;
		const std::string&	getEffects() const;

		virtual ASpell* clone() const = 0;
		void	launch(const ATarget& target) const;


	private:
		std::string _name;
		std::string _effects;
};

#endif
