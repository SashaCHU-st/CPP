/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:50:55 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 15:53:10 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie :: Zombie()
{
	std::cout <<  " Zombie Born" << std::endl;
}
void Zombie :: set_name(std::string name)
{
	this->name = name;
}

Zombie:: ~Zombie()
{
	std::cout<<this->name << " Zombie destroyed"<< std::endl;
}