/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 10:36:06 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 10:19:01 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Own.hpp"

HumanB::HumanB(std::string name): name(name), weapon(nullptr)
{
};
void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
};