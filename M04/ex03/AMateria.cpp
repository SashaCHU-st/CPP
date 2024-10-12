/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:05:25 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/11 13:49:29 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

void AMateria::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at *" << this->_types << std::endl;
	std::cout << "* heals " <<this->_types <<"’s wounds *" <<std::endl;
	
}