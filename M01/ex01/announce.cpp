/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   announce.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:27:35 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/06 10:29:29 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.hpp"
void Zombie::announce(void)
{
	std::cout << this->name <<" says BraiiiiiiinnnzzzZ..." << std::endl;
}