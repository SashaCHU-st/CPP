/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:24:20 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/29 14:56:00 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

class Zombie
{
	private:
		string name;
	public:
		Zombie(){cout <<  " Zombie Born" << endl;}
		//Zombie(string name){this->name = name;}
		void set_name(string name) {this->name = name;}
		void announce(void);
		~Zombie() { cout<<this->name << " Zombie destroyed"<< endl; }
};

#endif