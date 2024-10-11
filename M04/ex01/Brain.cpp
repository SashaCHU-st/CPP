/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:53:15 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/11 10:54:30 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor is called " <<std::endl;
}

Brain:: ~Brain()
{
	std::cout << "Brain destructor is called " <<std::endl;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Brain copy constructor is called " <<std::endl;
	*this = copy;
}

Brain& Brain::operator= (const Brain& copy)
{
	std::cout << "Brain copy operator  is called " <<std::endl;
	if(this == &copy)
		return(*this);
	for(int index = 0; index < 100; index++)
		this->_ideas[index] = copy._ideas[index];
	return(*this);
	
}

void Brain::setIdea(int index, std::string idea)
{
	this->_ideas[index] = idea;
}
std::string Brain :: getIdea(int index)
{
	if (index >= 0 && index < 100)
		return _ideas[index];
	 else
		return ("Error, must be from 0 to 100");
}