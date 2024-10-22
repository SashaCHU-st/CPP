/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:13:41 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/22 10:45:19 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"

Ice:: Ice()
{
	_types = "KuKu ice";
}

Ice::Ice (std:: string type)
{}

Ice::Ice(const Ice &copy)
{
	_types = copy._types;
}
Ice& Ice::operator=(Ice const &copy)
{
	_types = copy._types;
	return(*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor" << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria* kuku = new Ice("new ICE KUKU");
	return(kuku);
}

void Ice::use (ICharacter& target)
{
	std::cout << "* shoots an ice bolt at *" << target.getName() << std::endl;
}