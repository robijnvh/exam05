#ifndef SPELLBOOK_TEST_HPP
# define SPELLBOOK_TEST_HPP

# include <iostream>
# include <string>
# include <vector>
# include "ASpell_test.hpp"

class ASpell;

class SpellBook {
	std::vector<ASpell*>	_spells;

	SpellBook(const SpellBook&);
	SpellBook& operator=(const SpellBook&);

	public:
		SpellBook(void);
		~SpellBook(void);

		void				learnSpell(const ASpell*);
		void				forgetSpell(const std::string&);
		ASpell*				createSpell(const std::string&);
};

#endif