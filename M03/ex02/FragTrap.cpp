/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:39:27 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/18 09:05:56 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
	std::cout<< " High Five guys from FragTrap"<<std::endl;
};

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" <<std::endl;
};
FragTrap::FragTrap(FragTrap const &copy) :ClapTrap(copy)
{
	std::cout << "FragTrap copy operator is called" <<std::endl;
};
FragTrap &FragTrap:: operator= (const FragTrap& copy)
{
	if(this != &copy)
		ClapTrap::operator=(copy);
	return(*this);
	std::cout << "FragTrap assigmnet operator called" <<std::endl;
};

FragTrap::FragTrap(std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attack = 30;
	std::cout << "FragTrap Parametirized Constructor created with" <<  name<< " "<<std::endl;
};


FragTrap::FragTrap(): ClapTrap("Someone else from FragTrap")
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attack = 30;
	std::cout << "FragTrap Default Constructor created with"<< _name<<std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target
				<< ", causing " << this->_attack << " points of damage!" << std::endl;
		_energyPoints--;// Attacking and repairing cost 1 energy point each. 
	} 
	else 
	{
		std::cout << "FragTrap " << this->_name << " is out of energy or hit points!" << std::endl;
	}
}