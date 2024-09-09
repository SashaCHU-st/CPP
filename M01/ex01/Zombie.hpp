/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:24:20 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 12:04:22 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(){std::cout <<  " Zombie Born" << std::endl;}
		void set_name(std::string name) {this->name = name;}
		void announce(void);
		~Zombie() { std::cout<<this->name << " Zombie destroyed"<< std::endl; }
};

Zombie* zombieHorde( int N, std::string p_name );

#endif