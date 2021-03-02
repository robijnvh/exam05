/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BrickWall.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/04 11:55:40 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/05 12:32:40 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall(): ATarget("Inconspicuous Red-brick Wall")
{
}

BrickWall::~BrickWall(void) {}


ATarget*     BrickWall::clone() const
{
    return new BrickWall(*this);
}