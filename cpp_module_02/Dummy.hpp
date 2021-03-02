/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dummy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 16:45:53 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/04 11:55:23 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP
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
