/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:54:51 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/08 09:13:14 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() :_type("Default animal")
{
	std::cout << "Animal Default Constructor " << this->_type << " " << std::endl;
}

Animal::Animal(std::string name ):_type(name)
{
	std::cout << "Animal Parametirized Constructor created with" << this->_type << " " <<std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal ::Animal(Animal const &copy)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	_type = copy._type;
}

Animal& Animal:: operator= (const Animal& copy)
{
	std::cout << " Animal Assigment operator called" << std::endl;
	if(this == &copy)
		return(*this);
	_type = copy._type;
	return(*this);
}

// void Animal::setType(std::string _type)
// {
// 	this->_type = _type;
// }

std::string Animal::getType() const
{
	return(this->_type);
}

void Animal::makeSound() const
{
	std::cout << "Animal makes animal sound" << " " << std::endl;
}