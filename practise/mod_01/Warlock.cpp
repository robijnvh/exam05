#include "Warlock_test.hpp"

Warlock::Warlock(const std::string& name, const std::string& title) : _name(name), _title(title) 
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

const std::string&	Warlock::getName(void) const
{
	return _name;
}
	
const std::string&	Warlock::getTitle(void) const
{
	return _title;
}

void				Warlock::setTitle(const std::string& title)
{
	_title = title;
}

void				Warlock::introduce(void) const
{
	std::cout << getName() << ": I am " << getName() << ", " << getTitle() << " !" << std::endl;
}

void				Warlock::learnSpell(const ASpell* spell)
{
	std::vector<ASpell*>::iterator it = _spells.begin();

	for (; it != _spells.end() ; ++it)
		if ((*it)->getName() == spell->getName())
			return ;
	_spells.push_back(spell->clone());

}

void				Warlock::forgetSpell(const std::string spell)
{
	std::vector<ASpell*>::iterator it = _spells.begin();

	for (; it != _spells.end() ; ++it)
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

	for (; it != _spells.end() ; ++it)
		if ((*it)->getName() == spell)
		{
			(*it)->launch(target);
		}

}