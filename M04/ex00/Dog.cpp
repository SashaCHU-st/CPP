/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:11:25 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/07 14:21:26 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog Default Constructor " << this->_type<< " "<<std::endl;
}

Dog::Dog(std::string _type ): Animal(_type)
{
	std::cout << "Dog Parametirized Constructor created with" << this->_type<< " "<<std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog ::Dog(Dog const &copy)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	_type = copy._type;
}

Dog& Dog:: operator= (const Dog& copy)
{
	std::cout << " Cat Assigment operator called" << std::endl;
	if(this == &copy)
		return(*this);
	_type = copy._type;
	return(*this);
}

void Dog::makeSound() const
{
	std::cout << "Gav Gav" << " "<<std::endl;
}