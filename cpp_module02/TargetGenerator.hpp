#ifndef TargetGenerator_h
# define TargetGenerator_h

#include <string>
#include <iostream>
#include <map>

#include "Dummy.hpp"
#include "Fwoosh.hpp"

class TargetGenerator {
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget* target);
		void forgetTargetType(const std::string& target);
		ATarget* createTarget(const std::string& target);

	private:
		std::map<std::string, ATarget*>	target_map;

};

#endif
