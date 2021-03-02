#ifndef FWOOSH_TEST_HPP
# define FWOOSH_TEST_HPP

# include "ASpell_test.hpp"

class ASpell;

class Fwoosh : public ASpell {
	public:
		Fwoosh(void);
		~Fwoosh(void);
		virtual Fwoosh*	clone(void) const;
};

#endif
