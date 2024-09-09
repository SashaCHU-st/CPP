/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:40:52 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 15:55:44 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "Own.hpp"

class Weapon 
{
	private:
		std::string type;
	public:
		Weapon(std::string type)
		{
			this->type = type;
		};
		void setType(std:: string type);
		const std::string &getType();
};


#endif