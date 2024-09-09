/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Announce.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:27:35 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 12:03:06 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
void Zombie::announce(void)
{
	std::cout << this->name <<" says BraiiiiiiinnnzzzZ..." << std::endl;
}