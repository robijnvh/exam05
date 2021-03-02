/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fwoosh.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 16:43:11 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/04 11:14:35 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void)
{
	_name = "Fwoosh";
	_effects = "fwooshed";
}

Fwoosh::Fwoosh(const Fwoosh &rhs)
{
	*this = rhs;
}

Fwoosh&	Fwoosh::operator=(Fwoosh const &rhs)
{
	_name = rhs._name;
	_effects = rhs._effects;
	return (*this);
}

Fwoosh::~Fwoosh(void) {}

ASpell*     Fwoosh::clone() const
{
    return new Fwoosh(*this);
}
