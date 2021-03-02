#include "Warlock_test.hpp"
#include "ATarget_test.hpp"
#include "ASpell_test.hpp"
#include "Fwoosh_test.hpp"
#include "Dummy_test.hpp"
#include "Fireball_test.hpp"
#include "Polymorph_test.hpp"
#include "TargetGenerator_test.hpp"
#include "BrickWall_test.hpp"

int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);

  Fireball* fireball = new Fireball();

  richard.learnSpell(fireball);

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  richard.introduce();
  richard.launchSpell("Polymorph", *wall);
  richard.launchSpell("Fireball", *wall);
}
