/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:30:59 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/06 10:33:08 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.hpp"


void Weapon::setType(std:: string type)
{
	this->type = type;
}
std::string Weapon::getType()
{
	return(this->type);
}
