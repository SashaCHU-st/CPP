/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:03:57 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/11 12:58:17 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// //ORIGINAL
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;
	//  return 0;
	//CREATING 
	// Animal *Animals[100];
	// for (int i = 0; i < 49; i++)
	// {
	// 	Animals[i]= new Dog();
	// 	Animals[i]->makeSound();
	// }
	// for (int i = 50; i < 99; i++)
	// {
	// 	Animals[i]= new Cat();
	// 	Animals[i]->makeSound();
	// }
	// for(int i = 0; i < 100; i++)
	// 	delete(Animals[i]);
	// return 0;


	//Assigmnet operator
	std::cout << "///////////////////////////////////" <<std::endl;
	std::cout << "\033[31m" << "CREATING KUKU" <<"\033[0m" << std::endl;
	Dog one("KUKU");
	one.makeSound();
	std::cout <<  "the one " <<one.getType() << std::endl;

	one.get()->setIdea(1, "RRRRRRRRRRRR");

	std::cout << "///////////////////////////////////" <<std::endl;
	std::cout << "\033[31m" << "CREATING TWO (DEAFULT))" <<"\033[0m" << std::endl;
	Dog two;
	two.makeSound();
	std::cout <<  "Two one" <<two.getType() << std::endl;

	std::cout << "///////////////////////////////////" <<std::endl;
	std::cout << "\033[31m" << "ASSIGMENT OP=. THOUGHTS SHOULD BE SAME" <<"\033[0m" << std::endl;
	two = one;
	std::cout <<  "Idea from one dog: " <<one.get()->getIdea(1)<< std::endl;
	std::cout <<  "Idea from two  dog: " <<two.get()->getIdea(1)<< std::endl;
	std::cout << "\033[31m" << "CHANGING THOUGHTS FROM DOG ONE " <<"\033[0m" << std::endl;
	std::cout << "\033[31m" << "" <<"\033[0m" << std::endl;
	one.get()->setIdea(1, "ooooooooooooo");
	
	std::cout << "\033[31m" << "NOW THOUNGTS WILL BE DIFFERENT" <<"\033[0m" << std::endl;
	std::cout <<  "Idea from one dog: " <<one.get()->getIdea(1)<< std::endl;
	std::cout <<  "Idea from two  dog: " <<two.get()->getIdea(1)<< std::endl;
	std::cout <<  "Two after operator =" <<two.getType() << std::endl;
	
	
	return(0);	
	////deep copy
	// Cat *a = new Cat();
	// a->get()->setIdea(1, "kukukukuk");
	// a->makeSound();
	// std::cout<<a->get()->getIdea(1)<<std::endl;
	// std::cout<<a<<std::endl;
	// Cat *b = new Cat(*a);
	// delete(a);
	
	// b->makeSound();
	// std::cout<<a->get()->getIdea(1)<<std::endl;
	// std::cout<<b<<std::endl;
	// delete(b);
	//Animal a;
	//return(0);
	
}
	
