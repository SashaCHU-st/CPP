/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:01:05 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/07 13:53:56 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
	Dog();
	Dog(std::string _name );
	~Dog();
	Dog(Dog const &copy);
	Dog& operator= (const Dog& op);
	void makeSound() const;
};

#endif