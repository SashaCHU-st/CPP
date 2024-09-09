/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Attack.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:42:26 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 10:18:48 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Own.hpp"

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