/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:18:17 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/22 13:47:50 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"

Cure:: Cure()
{
	_types = "cure";
}

Cure::Cure (std:: string type) : AMateria(type)
{}

Cure::Cure(const Cure &copy)
{
	_types = copy._types;
}
Cure& Cure::operator=(Cure const &copy)
{
	_types = copy._types;
	return(*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria* kuku = new Cure("new Cure KUKU");
	return(kuku);
}

void Cure::use (ICharacter& target)
{
		std::cout << "* heals " <<this->_types <<"’s wounds *" <<std::endl;
}