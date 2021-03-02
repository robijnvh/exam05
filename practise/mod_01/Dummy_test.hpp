#ifndef DUMMY_TEST_HPP
# define DUMMY_TEST_HPP

# include "ATarget_test.hpp"

class ATarget;

class Dummy : public ATarget {
	public:
		Dummy(void);
		~Dummy(void);
		virtual Dummy*	clone(void) const;
};

#endif
