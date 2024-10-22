/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:14:36 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/22 10:40:40 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(std:: string name);
		Cure (const Cure &copy);
		Cure& operator= (Cure const &copy);
		~Cure();
		AMateria* clone() const;
		void use (ICharacter& target);
		
		
};

#endif