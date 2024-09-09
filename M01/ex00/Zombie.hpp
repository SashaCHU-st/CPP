/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:41:23 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 15:49:12 by aheinane         ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};
void randomChump( std::string name );
Zombie* newZombie(std::string p_name);
#endif