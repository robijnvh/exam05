/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TargetGenerator.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/05 11:26:45 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/05 11:37:46 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP
# include <iostream>
# include <string>
# include <vector>
# include "ATarget.hpp"

class ATarget;

class TargetGenerator {
	std::vector<ATarget*>	_targets;
	TargetGenerator(const TargetGenerator &rhs);
	TargetGenerator	&operator=(TargetGenerator const &rhs);

	public:
		TargetGenerator(void);
		~TargetGenerator(void);

		void		learnTargetType(ATarget*);
		void		forgetTargetType(std::string const&);
		ATarget*	createTarget(std::string const&);
};

#endif
