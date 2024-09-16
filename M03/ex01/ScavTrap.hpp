/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:39:22 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/16 13:37:58 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public  ClapTrap
{
	private:

	public:
		ScavTrap();
		
		~ScavTrap();
		ScavTrap(std::string name );
		ScavTrap(ScavTrap const &copy);
		ScavTrap& operator= (const ScavTrap& op);
		
		void guardGate();
};

#endif