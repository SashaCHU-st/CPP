/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:40:57 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/16 09:12:08 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attack;
	public:
		ClapTrap();
		ClapTrap(std::string _name );
		~ClapTrap();
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName()const;
		unsigned int getHitP() const;
		unsigned int getEnergyP() const;
		unsigned int getAttackP() const;
		
		void setName(std::string name);
		void setHitP(unsigned int hitP);
		void setEnergyP(unsigned int enerP);
		void setAttackP(unsigned int attackP);
		
};

#endif