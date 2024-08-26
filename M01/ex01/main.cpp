/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:31:22 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/26 13:35:02 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.hpp"
using namespace std;

int main(void)
{
	int N = 5;
	string name = "kuku";
	Zombie* nZombie;
	nZombie = zombieHorde(N, name); /// calling function that creates on heap
	for(int i = 0; i < N; i++)
	{
		nZombie[i].announce();// heap zombie tells his name
	}
	delete[] nZombie;

	return(0);
}