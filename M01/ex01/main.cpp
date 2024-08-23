/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:31:22 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/23 15:19:36 by aheinane         ###   ########.fr       */
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
		Zombie(){cout <<this->name <<  " Zombie Born" << endl;}
		Zombie(string name){this->name = name;}
		void set_name(string name) {this->name = name;}
		void announce(void);
		~Zombie() { cout<<this->name << " Zombie destroyed"<< endl; }
};

void Zombie::announce(void)
{
	cout << this->name <<" says BraiiiiiiinnnzzzZ..." << endl;
}
Zombie* zombieHorde( int N, std::string p_name )
{
	Zombie* name = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		name[i].set_name(p_name);
	}
	return(name);
}

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