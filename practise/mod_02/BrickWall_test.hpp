#ifndef BRICKWALL_TEST_HPP
# define BRICKWALL_TEST_HPP

# include "ATarget_test.hpp"

class ATarget;

class BrickWall : public ATarget {
	
	public:
		BrickWall(void);
		~BrickWall(void);
		virtual ATarget*                 clone() const;
};

#endif