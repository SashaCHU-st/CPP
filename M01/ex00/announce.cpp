/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   announce.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:50:49 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/26 13:22:48 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.hpp"
#include "Zombie.hpp"

void Zombie::announce(void)
{
	cout << this->name <<"BraiiiiiiinnnzzzZ..." << endl;
}