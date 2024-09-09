/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:35:13 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 16:47:09 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed :: Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
};

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	fixed_point = copy.getRawBits();
	//*this = copy;
}

Fixed::	~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

void Fixed :: setRawBits( int const raw )
{
	this->fixed_point = raw;
};
int Fixed:: getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->fixed_point);
};

Fixed	&Fixed ::operator= (const Fixed& op)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &op)
	{
		fixed_point = op.getRawBits();
	}
	return(*this);// protection from selfgiving values to the variables
};