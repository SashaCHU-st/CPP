/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:31:22 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/23 10:54:15 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

class Zombie
{
	private:
		string name;
	public:
		Zombie(string name): name(name) {}
		~Zombie() { cout<< "\n"<<this->name << " Zombie destroyed "; }
		void announce(void);
};

void randomChump( std::string name )
{
	Zombie new_zombie(name);
	new_zombie.announce();
}

// Zombie* newZombie(std::string p_name)
// {
// 	Zombie* name = new Zombie(p_name);
// 	return(name);
// }

void Zombie::announce(void)
{
	cout << this->name <<"BraiiiiiiinnnzzzZ..." << endl;
}
Zombie* zombieHorde( int N, std::string p_name )
{
	Zombie* name = new Zombie(p_name);
	return(name);
}

int main(int argc, char **argv)
{
	int N = 5;
	Zombie zombie("first ");/// creating object and giving anme how is it
	zombie.announce(); // just name it

	for(int i = 0; i < N; i++)
	{
		cout << "\n"<< " index "<< i ; 
		Zombie* nZombie = zombieHorde(N," on heap "); /// calling function that creates on heap
		nZombie->announce();// heap zombie tells his name
		delete nZombie;
	}
	randomChump("third "); // creating new zombie and announcing them 

	return(0);
}