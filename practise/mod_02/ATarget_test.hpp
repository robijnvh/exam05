#ifndef ATARGET_TEST_HPP
# define ATARGET_TEST_HPP
# include <iostream>
# include <string>
# include "ASpell_test.hpp"

class ASpell;

class ATarget {
	std::string _type;

	public:
		ATarget(void);
		ATarget(const std::string&);
		ATarget(const ATarget&);
		ATarget &operator=(const ATarget&);
		virtual ~ATarget(void);
		const std::string&	getType(void) const;
		void				getHitBySpell(const ASpell&) const;
		virtual ATarget		*clone(void) const = 0;
};

#endif