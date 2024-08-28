/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   attack.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:42:26 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/28 09:54:02 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.hpp"

void HumanA :: attack()
{
	std:: string weap;
	weap = weapon.getType();
	std::cout << this->name << " attacks with their " << weap << std::endl;
}

void HumanB :: attack()
{
	std:: string weap;
	weap = weapon->getType();
	std::cout << this->name << " attacks with their " << weap << std::endl;
}