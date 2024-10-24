/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:42:00 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/22 11:17:45 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(std::string name)
{
	std::cout << "Character cnstructor" << std::endl;
};
Character::Character(const Character const & copy)
{
	_name = copy._name;
};
Character& Character::operator=(Character const &copy)
{
	_name = copy._name;
	return(*this);
};
Character::~Character()
{
	
	std::cout << "Character Destrcutor" << std::endl;
};

std:: string const & Character :: getName() const
{
	return(this->_name);
};
void equip(AMateria* m);
void unequip(int idx);
void use(int idx, ICharacter& target);