/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:28:44 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 12:04:02 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string p_name )
{
	Zombie* name = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		name[i].set_name(p_name);
	}
	return(name);
}