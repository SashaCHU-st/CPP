/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:48:52 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/24 10:28:02 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *materials[4];
	public:
		MateriaSource();
		MateriaSource (const MateriaSource &copy);
		MateriaSource& operator= (MateriaSource const &copy);
		~MateriaSource();

		void learnMateria(AMateria* src);
		AMateria* createMateria(std::string const & type);
		
		
};

#endif