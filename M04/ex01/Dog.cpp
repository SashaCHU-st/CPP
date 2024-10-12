/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:11:25 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/12 11:55:47 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog Default Constructor " << this->_type<< " "<<std::endl;
	this->_brain = new Brain();
}

Dog::Dog(std::string _type ): Animal(_type)
{
	std::cout << "Dog Parametirized Constructor created with" << this->_type<< " "<<std::endl;
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
}

Dog ::Dog(Dog const &copy)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_brain = new Brain();
	_type = copy._type;
}

Dog& Dog:: operator= (const Dog& copy)
{
	std::cout << "Dog Assigment operator called" << std::endl;
	if(this == &copy)
		return(*this);
	_type = copy._type;
	*this->_brain = *copy._brain;
	return(*this);
}

void Dog::makeSound() const
{
	std::cout << "Gav Gav" << " "<<std::endl;
}

Brain *Dog:: get()
{
	return(this->_brain);
}