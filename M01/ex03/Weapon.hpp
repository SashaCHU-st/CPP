/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:40:52 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/27 14:17:34 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "own.hpp"

class Weapon 
{
	private:
		std::string type;
	public:
		Weapon(std::string type)
		{
			this->type = type;
		};
		void setType(std:: string type)
		{
			this->type = type;
		}
		std::string getType()
		{
			return(this->type);
		}
};


#endif