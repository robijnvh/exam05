#include "Warlock_test.hpp"
#include "ATarget_test.hpp"
#include "ASpell_test.hpp"
#include "Fwoosh_test.hpp"
#include "Dummy_test.hpp"

int main()
{
  Warlock richard("Richard", "the Titled");

  Dummy bob;
  Fwoosh* fwoosh = new Fwoosh();

  richard.learnSpell(fwoosh);

  richard.introduce();
  richard.launchSpell("Fwoosh", bob);

  richard.forgetSpell("Fwoosh");
  richard.launchSpell("Fwoosh", bob);
}
