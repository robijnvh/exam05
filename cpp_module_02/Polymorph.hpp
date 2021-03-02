/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Polymorph.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/04 11:52:58 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/04 11:53:35 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP
# include <iostream>
# include <string>
# include "ASpell.hpp"

class ASpell;

class Polymorph : public ASpell { 

	public:
		Polymorph(void);
		Polymorph(const Polymorph &rhs);
		Polymorph &operator=(Polymorph const &rhs);
		virtual ~Polymorph(void);

		virtual ASpell*		clone(void) const;	
};

#endif