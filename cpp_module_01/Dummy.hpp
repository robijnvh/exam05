/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dummy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 16:45:53 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/04 10:48:43 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dummy_HPP
# define Dummy_HPP
# include "ATarget.hpp"

class ATarget;

class Dummy	: public ATarget {

	public:
		Dummy(void);
		Dummy(const Dummy &rhs);
		Dummy &operator=(Dummy const &rhs);
		~Dummy(void);

		virtual ATarget*	clone(void) const;
};

#endif
