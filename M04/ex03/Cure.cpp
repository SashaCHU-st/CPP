/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:18:17 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/22 10:45:42 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"

Cure:: Cure()
{
	_types = "KuKu Cure";
}

Cure::Cure (std:: string type)
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
	std::cout << "* shoots an Cure bolt at *" << target.getName() << std::endl;
}