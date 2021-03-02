/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TargetGenerator.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/05 11:29:58 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/05 11:33:35 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void) {}

TargetGenerator::~TargetGenerator(void)
{
    std::vector<ATarget*>::iterator it = _targets.begin();

    for (; it != _targets.end(); ++it)
        delete (*it);
}

void				TargetGenerator::learnTargetType(ATarget* target)
{
	std::vector<ATarget*>::iterator it = _targets.begin();

    for (; it != _targets.end(); ++it)
        if ((*it)->getType() == target->getType())
            return ;
    _targets.push_back(target->clone());
}

void				TargetGenerator::forgetTargetType(std::string const& target)
{
	std::vector<ATarget*>::iterator it = _targets.begin();

    for (; it != _targets.end(); ++it)
        if ((*it)->getType() == target)
        {
            delete (*it);
            _targets.erase(it);
            return ;
        }
}

ATarget*			TargetGenerator::createTarget(std::string const& target)
{
    std::vector<ATarget*>::iterator it = _targets.begin();

    for (; it != _targets.end(); ++it)
        if ((*it)->getType() == target)
            return (*it);
    return NULL;
}