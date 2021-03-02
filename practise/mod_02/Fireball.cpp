#include "Fireball_test.hpp"

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp") {}

Fireball::~Fireball(void) {}

ASpell*     Fireball::clone() const
{
    return new Fireball(*this);
}
