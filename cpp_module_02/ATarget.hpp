/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ATarget.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 14:53:51 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/05 12:31:18 by robijnvanho   ########   odam.nl         */
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
		ATarget(const std::string&);
		ATarget(const ATarget &rhs);
		ATarget &operator=(ATarget const &rhs);
		virtual ~ATarget(void);

		const std::string&	getType(void) const;
		virtual ATarget*	clone(void) const = 0;
		void				getHitBySpell(const ASpell& rhs) const;
};

#endif