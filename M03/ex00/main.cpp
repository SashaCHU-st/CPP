/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:41:00 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/13 16:17:03 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main ()
{
	ClapTrap ClapTrap ("Kuku");
	ClapTrap.attack("Koko");

	ClapTrap.takeDamage(3);
	ClapTrap.beRepaired(4);
	return(0);
}