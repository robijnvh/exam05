/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Warlock.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 11:58:34 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/04 11:12:19 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "Warlock.hpp"

Warlock::Warlock(std::string const& name, std::string const& title) : _name(name), _title(title)
{ 
	std::cout << _name << ": This looks like another boring day." << std::endl;
}
				
Warlock::~Warlock(void)
{
	std::cout << _name << ": My job here is done!" << std::endl;
	
	std::vector<ASpell*>::iterator it = _spells.begin();

    for (; it != _spells.end(); ++it)
        delete (*it);
}
		
std::string const&	Warlock::getName(void) const 
{
	return (_name);
}

std::string const&	Warlock::getTitle(void) const
{
	return (_title);
}

void				Warlock::setTitle(std::string const& title)
{
	_title = title;
}

void				Warlock::introduce(void) const
{
	std::cout << _name << ": I am " << _name << ", " << _title << " !" << std::endl;
}

void				Warlock::learnSpell(const ASpell* spell)
{
	std::vector<ASpell*>::iterator it = _spells.begin();

    for (; it != _spells.end(); ++it)
        if ((*it)->getName() == spell->getName())
            return ;
    _spells.push_back(spell->clone());
}

void				Warlock::forgetSpell(const std::string spell)
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

void				Warlock::launchSpell(const std::string spell, const ATarget& target) const
{
	std::vector<ASpell*>::const_iterator it = _spells.begin();

    for (; it != _spells.end(); ++it)
        if ((*it)->getName() == spell)
            (*it)->launch(target);
}
