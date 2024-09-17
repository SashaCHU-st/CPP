/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:39:22 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/17 13:55:15 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public  ClapTrap
{
	public:
		FragTrap();
		
		~FragTrap();
		FragTrap(std::string name );
		FragTrap(FragTrap const &copy);
		FragTrap& operator= (const FragTrap& op);
		
		void attack(const std::string& target);
		void highFivesGuys(void);
		
};

#endif