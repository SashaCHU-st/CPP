/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:35:13 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/13 09:52:10 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
	this->fixed_point = 0;
};

Fixed::Fixed(const Fixed &op)
{
	*this = op;
}

Fixed::~Fixed(){};

void Fixed::setRawBits( int const raw )
{
	this->fixed_point = raw;
};
int Fixed::getRawBits( void ) const
{
	return(this->fixed_point);
};

Fixed	&Fixed ::operator= (const Fixed& op)
{
	if(this != &op)
	{
		fixed_point = op.getRawBits();
	}
	return(*this);
};




Fixed::Fixed(const int &a)
{
	this->fixed_point = a << fract;
};
Fixed::Fixed(const float &b)
{
	this->fixed_point = roundf(b*(1 << fract));
};
float Fixed:: toFloat( void ) const
{
	return((float)this->getRawBits() /(1 << fract));
};
int Fixed::toInt( void ) const
{
	return (this->getRawBits()  >> fract);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fractPoint)
{
	out<<fractPoint.toFloat();
	return(out);
}

// comparision operators
bool	Fixed ::operator<(const Fixed& op) const
{
	return(fixed_point<op.fixed_point);
};
bool	Fixed ::operator>(const Fixed& op)const
{
	return(fixed_point>op.fixed_point);
};
bool	Fixed ::operator>=(const Fixed& op)const
{
	return(fixed_point>=op.fixed_point);
};
bool	Fixed ::operator<=(const Fixed& op)const
{
	return(fixed_point<=op.fixed_point);
};
bool	Fixed ::operator==(const Fixed& op)const
{
	return(fixed_point==op.fixed_point);
};
bool	Fixed ::operator!=(const Fixed& op)const
{
	return(fixed_point!=op.fixed_point);
};




Fixed& Fixed:: min(Fixed& a, Fixed& b)
{
	if(a < b)
		return(a);
	else
		return(b);
};

 Fixed& Fixed:: max(Fixed& a, Fixed& b)
{
	if(a > b)
		return(a);
	else
		return(b);
};

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if(a < b)
		return(a);
	else
		return(b);
};

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if(a > b)
		return(a);
	else
		return(b);
};


// aritthmetic operators
Fixed Fixed:: operator+(const Fixed& op)
{
	return (Fixed(this->toFloat() + op.toFloat()));
};
Fixed Fixed:: operator-(const Fixed& op)
{
	return (Fixed(this->toFloat() - op.toFloat()));
};
Fixed Fixed:: operator*(const Fixed& op)
{
	return (Fixed(this->toFloat() * op.toFloat()));
};
Fixed Fixed:: operator/(const Fixed& op)
{
	return (Fixed(this->toFloat() / op.toFloat()));
};

///Pre increment/decrement
Fixed	&Fixed ::operator++()
{
	fixed_point++;
	return(*this);
};

Fixed	&Fixed ::operator--()
{
	fixed_point--;
	return(*this);
};

///Post increment/decrement
Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++(*this);
	return temp;
}

// Postfix decrement
Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--(*this);
	return temp;
}