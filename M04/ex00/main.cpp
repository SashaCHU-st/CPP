/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:03:57 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/01 10:58:18 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// //ORIGINAL
	// const Animal* meta = new Animal();// creating Animal 
	// const Animal* kuku = new Animal("KUKU");
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	
	// std::cout << "///////////////////////////////////" <<std::endl;
	// std::cout << "\033[31m" << "TYPE" <<"\033[0m" << std::endl;
	// std::cout << meta->getType() << " " << std::endl;// Dog
	// std::cout << kuku->getType() << " " << std::endl;// Dog
	// std::cout << j->getType() << " " << std::endl;// Dog
	// std::cout << i->getType() << " " << std::endl;//Cat
	
	// std::cout << "///////////////////////////////////" <<std::endl;
	// std::cout << "\033[31m" << "SOUNDS" <<"\033[0m" << std::endl;
	// i->makeSound(); //will output the cat sound! Myau
	// j->makeSound(); // Gav Gav
	// meta->makeSound(); /// Animal sound
	// kuku->makeSound();

	// std::cout << "///////////////////////////////////" <<std::endl;
	// std::cout << "\033[31m" << "DELETING" <<"\033[0m" << std::endl;
	// delete kuku;
	// delete meta;// animal desructor called
	// delete i;// cat destr
	// delete j; // dog destr
	// return 0;
	

	// //Assigmnet operator

	// std::cout << "///////////////////////////////////" <<std::endl;
	// std::cout << "\033[31m" << "CREATING KUKU" <<"\033[0m" << std::endl;
	// Animal one("KUKU");
	// one.makeSound();
	// std::cout <<  "the one " <<one.getType() << std::endl;

	// std::cout << "///////////////////////////////////" <<std::endl;
	// std::cout << "\033[31m" << "CREATING TWO (DEAFULT))" <<"\033[0m" << std::endl;
	// Animal two;
	// two.makeSound();
	// std::cout <<  "Two one" <<two.getType() << std::endl;

	// std::cout << "///////////////////////////////////" <<std::endl;
	// std::cout << "\033[31m" << "ASSIGMENT OP=, NOW TWO SHOULD BECAME ONE" <<"\033[0m" << std::endl;
	// two = one;
	// std::cout <<  "Two after operator =" <<two.getType() << std::endl;
	
	// return(0);	

	// ///WRONG ANIMAL
	// const WrongAnimal* meta = new WrongAnimal();
	// const WrongAnimal* i = new WrongCat();
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); // will make animal sound
	// meta->makeSound(); //will make animal sound

	// delete meta;
	// delete i;
	
	// return 0;


	// //Copy constrcutor and assigment oper
	// Animal a;// Animal Default Constructor Default animal 
	// Animal b = a;// copy constrcuor // Animal Copy constructor called
	// Animal c;// Animal Default Constructor Default animal
	// c = a;// assogment opeartor // Animal Assigment operator called

	return(0);
	
}