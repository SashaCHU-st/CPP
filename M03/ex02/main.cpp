/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:41:00 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/17 14:24:14 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
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
	
	
	std::cout << "\n" <<std::endl;
	std::cout << "///////////////////////////////////" <<std::endl;
	std::cout <<"\033[31m" <<  "SCATRAP" <<"\033[0m" <<std::endl;

	ScavTrap scavtrap("Robot");//parameterized constructor
	ScavTrap defaultscavtrap;//default constructor
	scavtrap.attack("Someone from ScavTrap");
	
	// Trying to use all HitPoints
	// for(int i = 0; i < 5;i++)
	// 	scavtrap.takeDamage(20);

	//TRYING USE ALL ENERGY POINTS
	// for(int i = 0; i < 51;i++)
	// 	scavtrap.attack("Someone esle from FragTrap");
	// for(int i = 0; i < 51;i++)
	// 	scavtrap.beRepaired(2);
	//scavtrap.beRepaired(2);/// here should be that he canot be repaired, because no points left already


	std::cout << "Points energy left for ScavTrap "<<scavtrap.getEnergyP() << std::endl;
	std::cout << "Points energy left for ScavTrap "<<scavtrap.getHitP() << std::endl;
	scavtrap.guardGate();

	
	std::cout << "\n" <<std::endl;
	std::cout << "///////////////////////////////////" <<std::endl;
	std::cout << "\033[31m"<< "FRAGTRAP" <<"\033[0m" <<std::endl;

	FragTrap frag("Koko");
	FragTrap deafultfrag;
	
	frag.attack("Someone from FragTrap");
	// //TRYING TO USE ALL ENERGY POINTS 
	// for(int i = 0; i <101; i++)
	// {
	// 	frag.attack("Someone else"); //calling attack with name
	// }
	
	//TO DAMAGE ALL HIT PONIT ARE LEFT
	for(int i = 0; i < 5; i++)
		frag.takeDamage(20);
	frag.beRepaired(2);/// here should be that he canot be repaired, because no points left already

	std::cout << "Points energy left for FragTrap "<<frag.getEnergyP() << std::endl;
	std::cout << "Points hit left for FragTrap "<<frag.getHitP() << std::endl;
	frag.highFivesGuys();

	std::cout << "\n" <<std::endl;
	std::cout << "/////////////////////////"<< std::endl;
	std::cout << "\033[31m"<< "DESTRUCTORS: "<< "\033[0m"<< std::endl;
	
	return(0);
} 