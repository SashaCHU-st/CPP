/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   announce.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:50:49 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/06 10:24:13 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.hpp"

void Zombie::announce(void)
{
	std::cout << this->name <<"BraiiiiiiinnnzzzZ..." << std::endl;
}