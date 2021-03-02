/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 12:38:46 by robijnvanho   #+#    #+#                 */
/*   Updated: 2021/02/01 12:49:50 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

int main()
{
	Warlock const richard("Richard", "Mistress of Magma");
	richard.introduce();
	std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

	Warlock* jack = new Warlock("Jack", "the Long");
	jack->introduce();
	jack->setTitle("the Mighty");
	jack->introduce();

	delete jack;
	
	Warlock test2("test2", "the second");
	test2.introduce();
	Warlock test3("test3", "the third");
	test3.introduce();
	
	// Warlock test; // shouldn't compile
	// test2 = test2; // shouldn't compile
	// Warlock test4(test2); // shouldn't compile

	return (0);
}
