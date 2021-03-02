#ifndef WARLOCK_TEST_HPP
# define WARLOCK_TEST_HPP

# include <iostream>
# include <string>
# include <vector>
# include "ASpell_test.hpp"
# include "ATarget_test.hpp"
# include "SpellBook_test.hpp"

class ASpell;
class ATarget;
class SpellBook;

class Warlock {
	std::string _name;
	std::string _title;

	SpellBook	_spellBook;

	Warlock(void);
	Warlock(const Warlock&);
	Warlock& operator=(const Warlock&);

	public:
		Warlock(const std::string&, const std::string&);
		~Warlock(void);

		const std::string&	getName(void) const;
		const std::string& getTitle(void) const;
		void				setTitle(const std::string&);
		void				introduce(void) const;
		void				learnSpell(ASpell*);
		void				forgetSpell(const std::string);
		void				launchSpell(const std::string, const ATarget&);
};

#endif
