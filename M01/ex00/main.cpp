/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:31:22 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/28 10:00:56 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include "Zombie.hpp"
#include "own.hpp"
using namespace std;


int main()
{
	Zombie zombie("first ");/// creating object and giving anme how is it
	zombie.announce(); // just name it

	Zombie *nZombie = newZombie("second on heap "); /// calling function that creates on heap
	nZombie->announce();// heap zombie tells his name
	randomChump("third "); // creating new zombie and announcing them 
	delete nZombie;

	return(0);
}