#ifndef POLYMORPH_TEST_HPP
# define POLYMORPH_TEST_HPP

# include "ASpell_test.hpp"

class ASpell;

class Polymorph : public ASpell {
	
	public:
		Polymorph(void);
		~Polymorph(void);
		virtual ASpell*                 clone() const;
};

#endif