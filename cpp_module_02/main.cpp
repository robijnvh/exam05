/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/05 11:33:52 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/05 12:33:09 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "BrickWall.hpp"
#include "Polymorph.hpp"
#include "TargetGenerator.hpp"
#include "Fireball.hpp"
#include "ATarget.hpp"
#include "Dummy.hpp"

int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;
//   Dummy model1;

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