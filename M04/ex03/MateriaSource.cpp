/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:17:11 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/24 10:35:59 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"
#include "AMateria.hpp"


MateriaSource:: MateriaSource()
{
	std::cout << "Materia Source constructor " <<std::endl;
	for(int i = 0; i < 4; i++)
	{
		materials[i] = NULL;
	}
}
MateriaSource::MateriaSource (const MateriaSource &copy)
{
	std::cout << "Materia Source copy constructor " <<std::endl;
	*this = copy;
}
MateriaSource& MateriaSource::operator= (MateriaSource const &copy)
{
	std::cout << "Materia Source assigment operator " <<std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->materials[i] = copy.materials[i];
	}
	return(*this);
}
MateriaSource::~MateriaSource()
{
	std::cout << "Materia Source Destructor " <<std::endl;
}

void  MateriaSource::learnMateria(AMateria* src)
{
	for (int i = 0; i < 4; i++)
	{
		if(this->materials[i])
		{
			this->materials[i] = src;
			return ;
		}
	}
	std::cout << " We are learning materia " <<std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *materia;
	for (int i = 0; i < 4; i++)
	{
		if(materials[i] != NULL)
		{
			if(materials[i]->getType() == type)
			{
				materia = materials[i]->clone();
				std::cout << materials[i]->getType() << " We are creating " <<std::endl;
				return(materia);
			}
		}
		else
			break;
			
		}
	return(NULL);
}