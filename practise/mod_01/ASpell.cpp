#include "ASpell_test.hpp"

ASpell::ASpell(void) : _name(), _effects() {}

ASpell::ASpell(const std::string name, const std::string effects) : _name(name), _effects(effects) {}

ASpell::ASpell(const ASpell& obj)
{
	*this = obj;
}

ASpell& 	ASpell::operator=(const ASpell& obj)
{
	_name = obj._name;
	_effects = obj._effects;
	return *this;
}

ASpell::~ASpell(void) {}

const std::string	ASpell::getName(void) const
{
	return _name;
}

const std::string	ASpell::getEffects(void) const
{
	return _effects;
}

void				ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}

