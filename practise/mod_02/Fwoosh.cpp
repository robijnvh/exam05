#include "Fwoosh_test.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh(void) {}

ASpell*     Fwoosh::clone() const
{
    return new Fwoosh(*this);
}
