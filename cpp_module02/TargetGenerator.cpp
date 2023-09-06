#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() { 
};
TargetGenerator::~TargetGenerator() {
};

void TargetGenerator::learnTargetType(ATarget* target) {
	target_map[target->getType()] = target;
};
void TargetGenerator::forgetTargetType(const std::string& target) {
	target_map.erase(target);
};

ATarget* TargetGenerator::createTarget(const std::string& target) {	
	if (target_map.find(target) != target_map.end()) {
		return (target_map[target]);
	}
	return (NULL);
};
