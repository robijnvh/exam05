#include "ATarget_test.hpp"

ATarget::ATarget(void) : _type() {}

ATarget::ATarget(const std::string& type) : _type(type) {}

ATarget::ATarget(const ATarget& inst)
{
	*this = inst;
}

ATarget&	ATarget::operator=(const ATarget& inst)
{
	_type = inst._type;
	return *this;
}

ATarget::~ATarget(void) {}

const std::string&          ATarget::getType() const
{
    return _type;
}

void                        ATarget::getHitBySpell(const ASpell& spell) const
{
    std::cout << getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
