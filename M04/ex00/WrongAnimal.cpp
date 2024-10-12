/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:54:51 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/12 11:50:53 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() :_type("Default WrongAnimal")
{
	std::cout << "WrongAnimal Default Constructor " << this->_type << " " << std::endl;
}

WrongAnimal::WrongAnimal(std::string name ):_type(name)
{
	std::cout << "WrongAnimal Parametirized Constructor created with" << this->_type << " " <<std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal ::WrongAnimal(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	_type = copy._type;
}

WrongAnimal& WrongAnimal:: operator= (const WrongAnimal& copy)
{
	std::cout << " WrongAnimal Assigment operator called" << std::endl;
	if(this == &copy)
		return(*this);
	_type = copy._type;
	return(*this);
}


std::string WrongAnimal::getType() const
{
	return(this->_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes RRRRRRRRRRRRRRRRR sound" << " " << std::endl;
}