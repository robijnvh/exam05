#include "Polymorph_test.hpp"

Polymorph::Polymorph(void) : ASpell("Polymorph", "turned into critter") {}

Polymorph::~Polymorph(void) {}

ASpell*     Polymorph::clone() const
{
    return new Polymorph(*this);
}
