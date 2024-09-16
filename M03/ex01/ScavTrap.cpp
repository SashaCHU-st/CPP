/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:39:27 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/16 13:56:20 by aheinane         ###   ########.fr       */
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
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attack = copy._attack;
	std::cout << "ScavTrap copy operator is called" <<std::endl;
};
ScavTrap &ScavTrap:: operator= (const ScavTrap& copy)
{
	if(this == &copy)
		return(*this);
	_name = copy._name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attack = 20;
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
	std::cout << "ScavTrap Default Constructor created with"<<std::endl;
}