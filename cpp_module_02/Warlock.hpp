/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Warlock.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 12:20:46 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/05 11:47:08 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <iostream>
# include <string>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class ATarget;
class ASpell;
class SpellBook;

class Warlock	{
		std::string				_name;
		std::string				_title;
		SpellBook				_spellBook;

		Warlock(void);
		Warlock(const Warlock &rhs);
		Warlock	&operator=(Warlock const &rhs);
	
	public:
		Warlock(std::string const&, std::string const&);
		~Warlock(void);
		
		std::string const&	getName(void) const;
		std::string const&	getTitle(void) const;
		void				setTitle(std::string const&);
		void				introduce(void) const;
		void				learnSpell(ASpell*);
		void				forgetSpell(const std::string);
		void				launchSpell(const std::string, const ATarget&);
};

#endif
