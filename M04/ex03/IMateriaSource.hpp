/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:07:52 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/22 09:40:27 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;// learning materia
	virtual AMateria* createMateria(std::string const & type) = 0;// cloning 
};

#endif