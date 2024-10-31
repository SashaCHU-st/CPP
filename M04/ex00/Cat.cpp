/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:12:21 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/28 14:53:27 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	std::cout << "Cat Default Constructor " << this->_type<< " "<<std::endl;
}

Cat::Cat(std::string name ): Animal (name)
{
	std::cout << "Cat Parametirized Constructor created with" << this->_type<< " "<<std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat ::Cat(Cat const &copy)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	_type = copy._type;
}

Cat& Cat:: operator= (const Cat& copy)
{
	std::cout << " Cat Assigment operator called" << std::endl;
	if(this == &copy)
		return(*this);
	_type = copy._type;
	return(*this);
}


void Cat::makeSound() const
{
	std::cout << "Myau Myua" << " "<<std::endl;
}
