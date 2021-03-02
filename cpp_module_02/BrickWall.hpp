/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BrickWall.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/04 11:54:53 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/05 12:32:15 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP
# include "ATarget.hpp"

class ATarget;

class BrickWall	: public ATarget {

	public:
		BrickWall(void);
		~BrickWall(void);

		virtual ATarget*	clone(void) const;
};

#endif
