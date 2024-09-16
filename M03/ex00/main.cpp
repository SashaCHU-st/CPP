/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:41:00 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/16 12:25:25 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main ()
{
	ClapTrap claptrap ("Kuku");//parameterized constructor
	ClapTrap defclaptrap1; //default constructor
	claptrap.attack("Someone else"); //calling attack with name


	//Trying to use all HitPoints
	
	claptrap.takeDamage(2);
	claptrap.takeDamage(2);
	claptrap.takeDamage(2);
	claptrap.takeDamage(2);
	claptrap.takeDamage(2);

	
	//try to first attack 8points then repair and try to use all points what is left
	// claptrap.attack("Someone else"); //calling attack with name
	// claptrap.takeDamage(2);

	// claptrap.attack("Someone else"); //calling attack with name
	// claptrap.takeDamage(2);	
	// claptrap.attack("Someone else"); //calling attack with name
	// claptrap.takeDamage(2);
	// claptrap.attack("Someone else"); //calling attack with name
	// claptrap.takeDamage(2);
	// claptrap.beRepaired(2);
	// claptrap.attack("Someone else"); //calling attack with name
	// claptrap.takeDamage(2);
	// claptrap.attack("Someone else"); //calling attack with name
	// claptrap.takeDamage(2);
	// claptrap.beRepaired(2);/// here should be that he canot be repaired, because no points left already
	
	////TRYING TO ATTACK 10 TIME WHILE THERE IS ENERGY POINTS 
	// for(int i = 0; i <10; i++)
	// {
	// 	claptrap.attack("Someone else"); //calling attack with name
	// }
	// //checking energy points
	// std::cout << "Points energy left"<<claptrap.getEnergyP() << std::endl;
	// claptrap.beRepaired(2); //  here should be that he canot be repaired, because no points left already, beacsue 0 energy left
	
	return(0);
} 