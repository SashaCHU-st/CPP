/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   attack.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:42:26 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/27 14:16:39 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.hpp"

void HumanA :: attack()
{
	std:: string weap;
	weap = weapon.getType();
	std::cout << this->name << " attacks with their " << weap << std::endl;
}

