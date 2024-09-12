/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:46:13 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 15:49:04 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: ~Zombie()
{ 
	std::cout<< "\n"<<this->name << " Zombie destroyed "; 
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}