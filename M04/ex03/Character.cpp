/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:42:00 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/01 10:02:35 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(std::string name): _name(name)
{
	std::cout << "Character string constructor " << this->_name<< std::endl;
	for(int i = 0;i < 4; i++)
	{
		this->materials[i] = NULL;
	}
}
Character::Character(Character const & copy)
{
	std::cout << "Character copy cnstructor" << std::endl;
	*this = copy;
	
}
Character& Character::operator=(Character const &copy)
{	
	if(this == &copy)
		return(*this);
	_name =  copy._name;
	for(int i = 0; i < 4 ; i++)
	{
		if (this->materials[i] != NULL)
		{
			delete this->materials[i];
			this->materials[i] = NULL;
		}
		if(copy.materials[i])
			this->materials[i] = copy.materials[i]->clone();
		else
			this->materials[i] = NULL;
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
		if(this->materials[i] == NULL)
		{
			this->materials[i] = m;
			return ;
		}
	}
	std::cout << "No slots" << std::endl;
	delete m;
	
}
void Character::unequip(int idx)
{
	if(idx >= 0 && idx < 4)
	{
		this->materials[idx] = NULL;
		return ;
	}
	else
		std::cout << "Cant equip" << std::endl;
}
void Character::use(int idx, ICharacter& target)
{
	if(idx>=0 && idx < 4 && this->materials[idx] != NULL)
		this->materials[idx]->use(target);
	else
		std::cout << "have to be from 0 to 3(included) " <<std::endl;
}
