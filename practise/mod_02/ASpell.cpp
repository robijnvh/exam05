#include "ASpell_test.hpp"

ASpell::ASpell(void) : _name(), _effects() {}

ASpell::ASpell(const std::string& name, const std::string& effects) : _name(name), _effects(effects) {}

ASpell::ASpell(const ASpell& inst)
{
	*this = inst;
}

ASpell&	ASpell::operator=(const ASpell& inst)
{
	_name = inst._name;
	_effects = inst._effects;
	return *this;
}

ASpell::~ASpell(void) {}

const std::string          ASpell::getName() const
{
    return _name;
}

const std::string          ASpell::getEffects() const
{
    return _effects;
}

void                        ASpell::launch(const ATarget& target) const
{
    target.getHitBySpell(*this);
}
