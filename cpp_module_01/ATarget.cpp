/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ATarget.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 14:56:08 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/01 16:38:44 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(void) : _type() {}

ATarget::ATarget(const std::string type) : _type(type) {}

ATarget::ATarget(const ATarget &rhs)
{
	*this = rhs;
}

ATarget&	ATarget::operator=(ATarget const &rhs)
{
	_type = rhs._type;
	return (*this);
}

ATarget::~ATarget(void) {}

std::string const&	ATarget::getType(void) const
{
	return (_type);
}

void		ATarget::getHitBySpell(ASpell const &rhs) const
{
	std::cout << _type << " has been " << rhs.getEffects() << "!" << std::endl;
}