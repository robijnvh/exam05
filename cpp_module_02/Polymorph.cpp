/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Polymorph.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/04 11:53:46 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/04 11:54:17 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph(void)
{
	_name = "Polymorph";
	_effects = "turned into critter";
}

Polymorph::Polymorph(const Polymorph &rhs)
{
	*this = rhs;
}

Polymorph&	Polymorph::operator=(Polymorph const &rhs)
{
	_name = rhs._name;
	_effects = rhs._effects;
	return (*this);
}

Polymorph::~Polymorph(void) {}

ASpell*     Polymorph::clone() const
{
    return new Polymorph(*this);
}
