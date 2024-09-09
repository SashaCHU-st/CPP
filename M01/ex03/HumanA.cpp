/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 10:34:53 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 10:18:52 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Own.hpp"
HumanA::HumanA(std::string name, Weapon &weap) :weapon(weap)
{
	this->name = name;
};