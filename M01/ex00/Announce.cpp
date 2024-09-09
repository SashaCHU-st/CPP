/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Announce.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:50:49 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 11:25:32 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void Zombie::announce(void)
{
	std::cout << this->name <<"BraiiiiiiinnnzzzZ..." << std::endl;
}