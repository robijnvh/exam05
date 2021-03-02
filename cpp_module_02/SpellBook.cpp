/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SpellBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/05 11:09:35 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/05 11:46:27 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(void) {}

SpellBook::~SpellBook(void)
{
    std::vector<ASpell*>::iterator it = _spells.begin();

    for (; it != _spells.end(); ++it)
        delete (*it);
}

void				SpellBook::learnSpell(const ASpell* spell)
{
	std::vector<ASpell*>::iterator it = _spells.begin();

    for (; it != _spells.end(); ++it)
        if ((*it)->getName() == spell->getName())
            return ;
    _spells.push_back(spell->clone());
}

void				SpellBook::forgetSpell(const std::string& spell)
{
	std::vector<ASpell*>::iterator it = _spells.begin();

    for (; it != _spells.end(); ++it)
        if ((*it)->getName() == spell)
        {
            delete (*it);
            _spells.erase(it);
            return ;
        }
}

ASpell*				SpellBook::createSpell(const std::string& spell)
{
    std::vector<ASpell*>::iterator it = _spells.begin();

    for (; it != _spells.end(); ++it)
        if ((*it)->getName() == spell)
            return (*it);
    return NULL;
}