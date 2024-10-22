/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:11:33 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/22 09:52:49 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(std:: string name);
		Ice (const Ice &copy);
		Ice& operator= (Ice const &copy);
		~Ice();
		AMateria* clone() const;
		void use (ICharacter& target);
};

#endif