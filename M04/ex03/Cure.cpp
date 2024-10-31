/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:18:17 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/31 09:36:42 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"

Cure:: Cure() : AMateria("cure")
{
	std::cout << " Default Cure constructor called" <<std::endl;
	_types = "cure";
}

// Cure::Cure (std:: string type) : AMateria("cure")
// {
// 	(void)type;
// 	std::cout << "Cure constructor called" <<std::endl;
// }

Cure::Cure(const Cure &copy)
{
	std::cout << "Copy constructor Cure" <<std::endl;
	_types = copy._types;
}
Cure& Cure::operator=(Cure const &copy)
{
	if(this == &copy)
		return(*this);
	_types = copy._types;
	return(*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria* kuku = new Cure(*this);
	return(kuku);
}

void Cure::use (ICharacter& target)
{
		std::cout << "* heals " << target.getName() <<"’s wounds *" <<std::endl;
}