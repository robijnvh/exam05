/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fireball.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/04 11:46:10 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/04 11:49:08 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP
# include <iostream>
# include <string>
# include "ASpell.hpp"

class ASpell;

class Fireball : public ASpell {
	
	public:
		Fireball(void);
		Fireball(const Fireball &rhs);
		Fireball &operator=(Fireball const &rhs);
		virtual ~Fireball(void);

		virtual ASpell*		clone(void) const;
};

#endif
