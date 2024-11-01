/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:03:57 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/01 11:20:30 by aheinane         ###   ########.fr       */
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
	// return 0;



	// /////////CREATING ARRAYS OF DOGS AND CATS
	// Animal *Animals[4];
	// for (int i = 0; i < 2; i++)
	// {
	// 	std::cout << "\033[31m" << "/////////" <<"\033[0m" << std::endl;
	// 	Animals[i]= new Dog();
	// 	std::cout << Animals[i]->getType() << std::endl;
	// 	Animals[i]->makeSound();
	// }
	// for (int i =2; i < 4; i++)
	// {
	// 	std::cout << "\033[31m" << "///////// "<<"\033[0m" << std::endl;
	// 	Animals[i]= new Cat();
	// 	std::cout << Animals[i]->getType() << std::endl;
	// 	Animals[i]->makeSound();
	// }

	// std::cout << "" <<std::endl;
	// std::cout << "\033[31m" << "DESTRUCTORS" <<"\033[0m" << std::endl;
	// for(int i = 0; i < 4; i++)
	// 	delete(Animals[i]);
	
	// return(0);
	
	

	// ////////Assigmnet operator
	// std::cout << "\033[31m" << "\nCREATING KUKU" <<"\033[0m" << std::endl;
	// Dog one("KUKU");
	// one.makeSound();
	// std::cout <<  "the one " <<one.getType() << std::endl;


	// one.get()->setIdea(1, "RRRRRRRRRRRR");



	// std::cout << "\033[31m" << "\nCREATING TWO (DEAFULT)" <<"\033[0m" << std::endl;
	// Dog two;
	// two.makeSound();
	// std::cout <<  "Two one " <<two.getType() << std::endl;



	// std::cout << "\033[31m" << "\nASSIGMENT OP=. THOUGHTS SHOULD BE SAME" <<"\033[0m" << std::endl;
	// two = one;
	// std::cout <<  "Idea from one dog: " <<one.get()->getIdea(1)<< std::endl;
	// std::cout <<  "Idea from two  dog: " <<two.get()->getIdea(1)<< std::endl;
	// std::cout << "\033[31m" << "CHANGING THOUGHTS FROM DOG ONE " <<"\033[0m" << std::endl;
	// std::cout << "\033[31m" << "" <<"\033[0m" << std::endl;
	// one.get()->setIdea(1, "000000000");
	

	
	// std::cout << "\033[31m" << "\nNOW THOUNGTS WILL BE DIFFERENT" <<"\033[0m" << std::endl;
	// std::cout <<  "Idea from one dog: " <<one.get()->getIdea(1)<< std::endl;
	// std::cout <<  "Idea from two  dog: " <<two.get()->getIdea(1)<< std::endl;
	// std::cout <<  "Two after operator =" <<two.getType() << std::endl;
	

	
	// std::cout << "\033[31m" << "\nDESTRUCTORS" <<"\033[0m" << std::endl;

	// Animal  a;// cannot make copy of Animal because Animal has pure virtual function. ANial is abstract class 
	// Animal *a = new Dog();// this can be
	// a->makeSound();
	
	return(0);
	
}