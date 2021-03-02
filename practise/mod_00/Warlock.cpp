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
