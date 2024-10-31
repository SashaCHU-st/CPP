/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:42:00 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/31 09:47:33 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(std::string name): _name(name)
{
	std::cout << "Character string cnstructor" << std::endl;
	for(int i = 0;i < 4; i++)
	{
		this->materials[i] = NULL;
	}
}
Character::Character(Character const & copy)
{
	std::cout << "Character copy cnstructor" << std::endl;
	_name = copy._name;
	
}
Character& Character::operator=(Character const &copy)
{	
	if(this == &copy)
		return(*this);
	for(int i = 0; i < 4 ; i++)
	{
		if(copy.materials[i])
			this->materials[i] = copy.materials[i]->clone();
	}
	return(*this);
}
Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if(this->materials[i])
		{
			delete this->materials[i];
			this->materials[i] = NULL;
		}
	}
	std::cout << "Character Destructor" << std::endl;
}

std:: string const & Character :: getName() const
{
	return(this->_name);
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		this->materials[i] = m;
	}
}
void Character::unequip(int idx)
{
	this->materials[idx] = NULL;
}
void Character::use(int idx, ICharacter& target)
{
	this->materials[idx]->use(target);
}