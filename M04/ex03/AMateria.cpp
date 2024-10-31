/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:05:25 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/31 09:50:14 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria hit" << target.getName() << std::endl;
	
}

AMateria:: AMateria()
{
	std::cout << "AMateria constructr"<< std::endl;
}

AMateria:: ~AMateria()
{
	std::cout << "Destrcutr AMateria" << this->_types << " " <<std::endl;
}
AMateria ::AMateria(std::string const &type)
{
	std::cout << "AMateria copy string constructor called" << std::endl;
	this->_types = type;
}

AMateria ::AMateria(const AMateria &type)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	_types = type._types;
}
AMateria& AMateria::operator=(const AMateria& type)
{
	if(this == &type)
		return(*this);
	this->_types  = type._types;
	return(*this);
}

std:: string const & AMateria::getType()const
{
	return(this->_types);
}