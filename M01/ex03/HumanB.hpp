/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:37:43 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/27 14:49:08 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "own.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon weapon;
	public:
		HumanB(std::string name): name(name), weapon()
		{
			
		};
		void setWeapon(Weapon weapon);
		void attack();

};


#endif