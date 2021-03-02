/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fwoosh.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 16:40:30 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/04 11:46:27 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP
# include <iostream>
# include <string>
# include "ASpell.hpp"

class ASpell;

class Fwoosh : public ASpell { 

	public:
		Fwoosh(void);
		Fwoosh(const Fwoosh &rhs);
		Fwoosh &operator=(Fwoosh const &rhs);
		virtual ~Fwoosh(void);

		virtual ASpell*		clone(void) const;	
};

#endif
