/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Warlock.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 11:58:34 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/05 12:24:41 by robijnvanho   ########   odam.nl         */
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

void				Warlock::learnSpell(ASpell* spell)
{
	_spellBook.learnSpell(spell);
}

void				Warlock::forgetSpell(const std::string spell)
{
	_spellBook.forgetSpell(spell);
}

void				Warlock::launchSpell(const std::string spell, const ATarget& target)
{
    ASpell* inst = _spellBook.createSpell(spell);

    if (inst != NULL)
        inst->launch(target);
}
