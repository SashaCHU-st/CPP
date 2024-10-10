/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:03:57 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/10 17:01:35 by aheinane         ###   ########.fr       */
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

	///deep copy
	Cat *a = new Cat();
	a->get()->setIdea(1, "kukukukuk");
	a->makeSound();
	std::cout<<a->get()->getIdea(1)<<std::endl;
	std::cout<<a<<std::endl;


	Cat *b = new Cat(*a);
	delete(a);
	
	b->makeSound();
	std::cout<<a->get()->getIdea(1)<<std::endl;
	std::cout<<b<<std::endl;
	delete(b);
	return(0);
	
}
	
