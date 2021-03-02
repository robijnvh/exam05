/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ATarget.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 14:53:51 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/04 11:15:43 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP
# include <iostream>
# include <string>
# include "ASpell.hpp"

class ASpell;

class ATarget	{
		std::string	_type;

	public:
		ATarget(void);
		ATarget(const std::string);
		ATarget(const ATarget &rhs);
		ATarget &operator=(ATarget const &rhs);
		~ATarget(void);

		std::string const&	getType(void) const;
		virtual ATarget*	clone(void) const = 0;
		void				getHitBySpell(ASpell const &rhs) const;
};

#endif