/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:31:22 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/23 10:31:23 by aheinane         ###   ########.fr       */
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

Zombie* newZombie(std::string p_name)
{
	Zombie* name = new Zombie(p_name);
	return(name);
}

void Zombie::announce(void)
{
	cout << this->name <<"BraiiiiiiinnnzzzZ..." << endl;
}

int main()
{
	Zombie zombie("first ");/// creating object and giving anme how is it
	zombie.announce(); // just name it

	Zombie* nZombie = newZombie("second on heap "); /// calling function that creates on heap
	nZombie->announce();// heap zombie tells his name
	randomChump("third "); // creating new zombie and announcing them 
	delete nZombie;

	return(0);
}