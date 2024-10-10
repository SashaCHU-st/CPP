/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:12:21 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/08 09:13:34 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat Default Constructor " << this->_type<< " "<<std::endl;
}

WrongCat::WrongCat(std::string name ): WrongAnimal (name)
{
	std::cout << "WrongCat Parametirized Constructor created with" << this->_type<< " "<<std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat ::WrongCat(WrongCat const &copy)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	_type = copy._type;
}

WrongCat& WrongCat:: operator= (const WrongCat& copy)
{
	std::cout << " WrongCat Assigment operator called" << std::endl;
	if(this == &copy)
		return(*this);
	_type = copy._type;
	return(*this);
}


void WrongCat::makeSound() const
{
	std::cout << "WrongCat AUUUUUUUUUUUUUU" << " "<<std::endl;
}
