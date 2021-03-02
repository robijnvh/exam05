/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ASpell.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 14:29:42 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/01 14:51:08 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP
# include <iostream>
# include <string>
# include "ATarget.hpp"

class ATarget;

class ASpell	{
	protected:
		std::string	_name;
		std::string	_effects;

	public:
		ASpell(void);
		ASpell(const std::string, const std::string);
		ASpell(const ASpell &rhs);
		ASpell &operator=(ASpell const &rhs);
		virtual ~ASpell(void);

		const std::string	getName(void) const;
		const std::string	getEffects(void) const;
		virtual ASpell*		clone(void) const = 0;
		void				launch(const ATarget& target) const;
		
};

#endif
