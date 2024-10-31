/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:01:11 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/31 12:49:33 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

int main()
{
	std::cout << "\033[31m" << "CREATING MATERIASOURCE" <<"\033[0m" << std::endl;
	IMateriaSource* src = new MateriaSource();// create array of storage of skills
	std::cout << "\033[31m" << "\nLEARNING MATERIA" <<"\033[0m" << std::endl;
	src->learnMateria(new Ice()); //leraning ice
	src->learnMateria(new Cure());//learning cure

	std::cout << "\033[31m" << "\nCREATING CHARACTER ME" <<"\033[0m" << std::endl;
	ICharacter* me = new Character("me");// create char "me"
	AMateria* tmp;// create AMateria
	tmp = src->createMateria("ice");// create skills ice
	me->equip(tmp);// equip "me" with ice
	tmp = src->createMateria("cure");//create skills cure
	me->equip(tmp);//equipe me with cure
	////////////////TESTING
	// tmp = src->createMateria("ice");// create skills ice
	// me->equip(tmp);// equip "me" with ice
	// tmp = src->createMateria("cure");//create skills cure
	// me->equip(tmp);//equipe me with cure

	
	std::cout << "\033[31m" << "\nCREATING CHARACTER BOB" <<"\033[0m" << std::endl;
	ICharacter* bob = new Character("bob");// create "bob "


	
	std::cout << "\033[31m" << "\nUSING THE SKILLS" <<"\033[0m" << std::endl;
	me->use(0, *bob);// use the skills ice
	me->use(1, *bob);//use the skill cure
	////TESTING
	// me->use(2, *bob);// use the skills ice
	// me->use(3, *bob);//use the skill cure
	// me->use(4, *bob);//use the skill cure
	
	std::cout << "\033[31m" << "\nDESTRUCTORS" <<"\033[0m" << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}