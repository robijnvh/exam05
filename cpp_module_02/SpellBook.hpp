/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SpellBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/04 12:14:00 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/05 11:45:56 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP
# include <iostream>
# include <string>
# include <vector>
# include "ASpell.hpp"

class ASpell;

class SpellBook {
	std::vector<ASpell*>	_spells;
	SpellBook(const SpellBook &rhs);
	SpellBook	&operator=(SpellBook const &rhs);

	public:
		SpellBook(void);
		~SpellBook(void);

		void				learnSpell(const ASpell*);
		void				forgetSpell(const std::string&);
		ASpell*				createSpell(const std::string&);
};

#endif
