/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:41:00 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/20 15:01:28 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main ()
{
	std::cout << "///////////////////////////////////" <<std::endl;
	std::cout << "\033[31m" << "CLAPTRAP" <<"\033[0m" << std::endl;
	
	ClapTrap claptrap ("Kuku");//parameterized constructor
	ClapTrap defclaptrap1; //default constructor
	claptrap.attack("Someone else"); //calling attack with name


	// //Trying to use all HitPoints	
	// for(int i = 0; i < 5; i++)
	// 	claptrap.takeDamage(2);
	
	////TRYING TO ATTACK 10 TIME WHILE THERE IS ENERGY POINTS 
	// for(int i = 0; i <10; i++)
	// 	claptrap.attack("Someone else"); //calling attack with name
	
	// //checking energy/hit points
	std::cout << "Points energy left for ScavTrap "<<claptrap.getEnergyP() << std::endl;
	std::cout << "Points hit left for ScavTrap "<<claptrap.getHitP() << std::endl;
	// claptrap.beRepaired(2); //  here should be that he canot be repaired, because no points left already, beacsue 0 energy left
	
	return(0);
} 