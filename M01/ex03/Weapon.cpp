/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:30:59 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 15:44:35 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Own.hpp"


void Weapon::setType(std:: string type)
{
	this->type = type;
}
const std::string& Weapon::getType() 
{
	return(this->type);
}
