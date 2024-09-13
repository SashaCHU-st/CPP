/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:35:13 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/13 09:29:23 by aheinane         ###   ########.fr       */
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
	*this = copy;
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
	return(this->fixed_point);
};

Fixed	&Fixed ::operator= (const Fixed& op)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &op)
	{
		fixed_point = op.getRawBits();
	}
	return(*this);
};




Fixed::Fixed(const int &a) //: fixed_point(a << fract)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = a << fract;
};
Fixed::Fixed(const float &b)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = roundf(b * (1 << fract));
};
float Fixed:: toFloat( void ) const
{
	return((float)fixed_point /(1 << fract));
};
int Fixed::toInt( void ) const
{
	return ((int)fixed_point >> fract);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fractPoint)
{
	out << fractPoint.toFloat();
	return(out);
}