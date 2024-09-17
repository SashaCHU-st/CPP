/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:39:27 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/17 14:46:09 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
void ScavTrap:: guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." <<std::endl;
};


ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" <<std::endl;
};
ScavTrap::ScavTrap(ScavTrap const &copy) :ClapTrap(copy)
{
	std::cout << "ScavTrap copy operator is called" <<std::endl;
};
ScavTrap &ScavTrap:: operator= (const ScavTrap& copy)
{
	if(this != &copy)
		ClapTrap::operator=(copy);
	return(*this);
	std::cout << "ScavTrap assigmnet operator called" <<std::endl;
};

ScavTrap::ScavTrap(std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attack = 20;
	std::cout << "ScavTrap Parametirized Constructor created with" <<  name<< " "<<std::endl;
};


ScavTrap::ScavTrap(): ClapTrap("Someone else from ScavTrap")
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attack = 20;
	std::cout << "ScavTrap Default Constructor created with"<< _name<<std::endl;
}
void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target
				<< ", causing " << this->_attack << " points of damage!" << std::endl;
		_energyPoints--;// Attacking and repairing cost 1 energy point each. 
	} 
	else 
	{
		std::cout << "ScavTrap " << this->_name << " is out of energy or hit points!" << std::endl;
	}
}