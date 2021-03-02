/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dummy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 16:47:27 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/04 10:48:49 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(): ATarget("Target Practice Dummy")
{
}

Dummy::Dummy(const Dummy &rhs)
{
	*this = rhs;
}

Dummy&	Dummy::operator=(Dummy const &rhs)
{
	return (*this);
}

Dummy::~Dummy(void) {}


ATarget*     Dummy::clone() const
{
    return new Dummy(*this);
}
