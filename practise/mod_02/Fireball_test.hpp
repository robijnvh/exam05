#ifndef FIREBALL_TEST_HPP
# define FIREBALL_TEST_HPP

# include "ASpell_test.hpp"

class ASpell;

class Fireball : public ASpell {
	
	public:
		Fireball(void);
		~Fireball(void);
		virtual ASpell*                 clone() const;
};

#endif
