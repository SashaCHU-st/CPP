/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:24:20 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/06 10:28:30 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "own.hpp"

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

#endif