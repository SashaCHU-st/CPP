/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:31:22 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/06 10:27:27 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.hpp"


int main(void)
{
	int N = 5;
	std::string name = "kuku";
	Zombie* nZombie;
	nZombie = zombieHorde(N, name);
	for(int i = 0; i < N; i++)
	{
		nZombie[i].announce();
	}
	delete[] nZombie;

	return(0);
}