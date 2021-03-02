/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Warlock.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 16:12:22 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/16 16:14:21 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <iostream>
# include <string>

class Warlock	{
	std::string _name;
	std::string _title;
	Warlock(void);
	Warlock(const Warlock &);
	Warlock	&operator=(Warlock const &);

	public:
		Warlock(std::string const&, std::string const&);
		~Warlock(void);

		std::string const&	getName(void) const;
		std::string const&	getTitle(void) const;
		void				setTitle(std::string const&);
		void				introduce(void) const;
};

#endif
