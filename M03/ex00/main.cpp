/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:41:00 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/16 09:53:55 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main ()
{
	ClapTrap claptrap ("Kuku");//parameterized constructor
	ClapTrap defclaptrap1; //default constructor
	claptrap.attack("Someone else"); //calling attack with name


	//Trying to use all points
	// claptrap.takeDamage(2);
	// claptrap.takeDamage(2);
	// claptrap.takeDamage(2);
	// claptrap.takeDamage(2);
	// claptrap.takeDamage(2);

	
	//try to first attack 8points then repair and try to use all points what is left
	claptrap.takeDamage(2);
	claptrap.takeDamage(2);
	claptrap.takeDamage(2);
	claptrap.takeDamage(2);
	claptrap.beRepaired(2);
	claptrap.takeDamage(2);
	claptrap.takeDamage(2);
	claptrap.beRepaired(2);/// here should be that he canot be repaired, because no points left already
	
	
	
	return(0);
} 