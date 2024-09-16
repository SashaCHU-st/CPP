/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:40:53 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/16 09:46:21 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default name"),_hitPoints(10), _energyPoints(10), _attack(0)
{
	std::cout << "Default Constructor created with" << this->_name<< " "<<std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attack(0)
{
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target
				<< ", causing " << this->_attack << " points of damage!" << std::endl;
		_energyPoints--;
	} 
	else 
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy or hit points!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= _hitPoints)
	{
		_hitPoints = 0;
	}
	else
	{
		_hitPoints -= amount;
	}
	std::cout << this->_name << " took " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_hitPoints += amount;
		std::cout << this->_name << " was repaired by " << amount << " points!" << std::endl;
		_energyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " can't be repaired!" << std::endl;
	}
}

std::string ClapTrap::getName()const
{
	return(this->_name);
};
unsigned int ClapTrap::getHitP() const
{
	return(this->_hitPoints);
};
unsigned int ClapTrap::getEnergyP() const
{
	return(this->_energyPoints);
};
unsigned int ClapTrap::getAttackP() const
{
	return(this->_attack);
};
void ClapTrap::setName(std::string name)
{
	this->_name = name;
};
void ClapTrap::setHitP(unsigned int hitP)
{
	this->_hitPoints= hitP;
};
void ClapTrap::setEnergyP(unsigned int enerP)
{
	this->_energyPoints = enerP;
};
void ClapTrap::setAttackP(unsigned int attackP)
{
	this->_attack = attackP;
};