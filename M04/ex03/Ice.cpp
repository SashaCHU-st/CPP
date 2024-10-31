/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:13:41 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/31 12:31:25 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"

Ice:: Ice(): AMateria("ice")
{
	std::cout << "ice Default constructor called" << std::endl;
	_types = "ice";
}

Ice::Ice(const Ice &copy)
{
	std::cout << "ice Copy constructor" <<std::endl;
	_types = copy._types;
}
Ice& Ice::operator=(Ice const &copy)
{
	if(this == &copy)
		return(*this);
	_types = copy._types;
	return(*this);
}

Ice::~Ice()
{
	std::cout << "ice destructor" << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria* kuku = new Ice(*this);
	return(kuku);
}

void Ice::use (ICharacter& target)
{
	std::cout << "* shoots an ice bolt at * " << target.getName() << std::endl;
}