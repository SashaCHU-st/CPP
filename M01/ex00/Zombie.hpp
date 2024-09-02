/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:41:23 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/26 11:44:51 by aheinane         ###   ########.fr       */
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
		Zombie(string name): name(name) {}
		~Zombie() { cout<< "\n"<<this->name << " Zombie destroyed "; }
		void announce(void);
};

#endif