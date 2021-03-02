#ifndef ASPELL_TEST_HPP
# define ASPELL_TEST_HPP

# include <iostream>
# include <string>
# include "ATarget_test.hpp"

class ATarget;

class ASpell {
	protected:
		std::string _name;
		std::string _effects;

	public:
		ASpell(void);
		ASpell(const std::string name, const std::string effects);
		ASpell(const ASpell&);
		ASpell& operator=(const ASpell&);
		virtual ~ASpell(void);

		const std::string	getName(void) const;
		const std::string	getEffects(void) const;
		void				launch(const ATarget&) const;
		virtual ASpell*		clone(void) const = 0;
};

#endif
