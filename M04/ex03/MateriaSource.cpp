/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:17:11 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/31 12:39:53 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"
#include "AMateria.hpp"


MateriaSource:: MateriaSource()
{
	std::cout << "MateriaSource Default constructor " <<std::endl;
	for(int i = 0; i < 4; i++)
	{
		materials[i] = NULL;
	}
}
MateriaSource::MateriaSource (const MateriaSource &copy)
{
	std::cout << "MateriaSource copy constructor " <<std::endl;
	*this = copy;
}
MateriaSource& MateriaSource::operator= (MateriaSource const &copy)
{
	std::cout << "MateriaSource assigment operator " <<std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->materials[i] = copy.materials[i];
	}
	return(*this);
}
MateriaSource::~MateriaSource()
{
	for (int i = 0;i < 4; i++)
	{
		if(this->materials[i] != NULL)
		{
			delete this->materials[i];
			this->materials[i] = NULL;
		}
	}
	std::cout << "MateriaSource Destructor " <<std::endl;
}

void  MateriaSource::learnMateria(AMateria* src)
{
	for (int i = 0; i < 4; i++)
	{
		if(this->materials[i] == NULL)
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
				std::cout  << "We are creating "<< materials[i]->getType() <<std::endl;
				return(materia);
			}
		}
		else
			break;	
	}
	return(NULL);
}