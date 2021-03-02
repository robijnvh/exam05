/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fireball.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/04 11:46:00 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/04 11:50:01 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp" 

Fireball::Fireball(void)
{
	_name = "Fireball";
	_effects = "burnt to a crisp";
}

Fireball::Fireball(const Fireball &rhs)
{
	*this = rhs;
}

Fireball&	Fireball::operator=(Fireball const &rhs)
{
	_name = rhs._name;
	_effects = rhs._effects;
	return (*this);
}

Fireball::~Fireball(void) {}

ASpell*     Fireball::clone() const
{
    return new Fireball(*this);
}