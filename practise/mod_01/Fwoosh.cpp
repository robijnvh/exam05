#include "Fwoosh_test.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh(void) {}

Fwoosh*	Fwoosh::clone(void) const
{
	return new Fwoosh(*this);
}
