/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:03:05 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/07 14:58:55 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain* _brain;
	public:
		Cat();
		Cat(std::string _name );
		~Cat();
		Cat(Cat const &copy);
		Cat& operator= (const Cat& op);
		void makeSound() const;
};

#endif