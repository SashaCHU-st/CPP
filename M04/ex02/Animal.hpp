/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:54:57 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/10 17:35:21 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string _name );
		virtual ~Animal();
		Animal(Animal const &copy);
		Animal& operator= (const Animal& op);

		std::string getType() const;
		//void setType(std::string _type);
		virtual void makeSound() const = 0;
};

#endif