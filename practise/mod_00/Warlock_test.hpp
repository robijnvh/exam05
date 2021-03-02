#ifndef WARLOCK_TEST_HPP
# define WARLOCK_TEST_HPP

# include <iostream>
# include <string>

class Warlock {
	std::string _name;
	std::string _title;
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
};

#endif
