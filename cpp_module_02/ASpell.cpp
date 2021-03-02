/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ASpell.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 14:37:14 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/01 16:39:40 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(void) : _name(), _effects() {}

ASpell::ASpell(const std::string name, const std::string effects) : _name(name), _effects(effects) {}

ASpell::ASpell(const ASpell &rhs)
{
	*this = rhs;
}

ASpell&	ASpell::operator=(ASpell const &rhs)
{
	_name = rhs._name;
	_effects = rhs._effects;
	return (*this);
}

ASpell::~ASpell(void) {}

const std::string	ASpell::getName(void) const
{
	return (_name);
}

const std::string	ASpell::getEffects(void) const
{
	return (_effects);
}

void				ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}