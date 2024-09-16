/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:41:00 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/16 14:33:49 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main ()
{
	std::cout << "///////////////////////////////////" <<std::endl;
	std::cout << "CLAPTRAP" <<std::endl;
	
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
	std::cout << "\n" <<std::endl;
	std::cout << "///////////////////////////////////" <<std::endl;
	std::cout << "SCATRAP" <<std::endl;

	ScavTrap scavtrap("Robot");//parameterized constructor
	ScavTrap defaultscavtrap;//default constructor
	scavtrap.attack("Someone from ScavTrap");
	
	scavtrap.guardGate();
	// Trying to use all HitPoints
	scavtrap.takeDamage(20);
	scavtrap.takeDamage(20);
	scavtrap.takeDamage(20);
	scavtrap.takeDamage(20);
	scavtrap.takeDamage(20);
	scavtrap.beRepaired(2);/// here should be that he canot be repaired, because no points left already
	std::cout << "Points energy left for ScavTrap "<<scavtrap.getEnergyP() << std::endl;
	std::cout << "Points energy left for ScavTrap "<<scavtrap.getHitP() << std::endl;

	std::cout << "\n" <<std::endl;
	std::cout << "/////////////////////////"<< std::endl;
	std::cout << "DESTRUCTORS: "<< std::endl;
	return(0);
} 