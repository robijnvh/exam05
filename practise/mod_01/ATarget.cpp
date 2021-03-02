#include "ATarget_test.hpp"

ATarget::ATarget(void) : _type() {}

ATarget::ATarget(const std::string type) : _type(type) {}

ATarget::ATarget(const ATarget& obj)
{
	*this = obj;
}

ATarget& 	ATarget::operator=(const ATarget& obj)
{
	_type = obj._type;
	return *this;
}

ATarget::~ATarget(void) {}

const std::string&	ATarget::getType(void) const
{
	return _type;
}

void				ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
