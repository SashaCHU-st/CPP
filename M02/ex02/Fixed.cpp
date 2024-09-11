/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:35:13 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/11 15:25:07 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed :: Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
};

Fixed::Fixed(const Fixed &op)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = op;
}

Fixed::	~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
};

void Fixed :: setRawBits( int const raw )
{
	this->fixed_point = raw;
};
int Fixed:: getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return(this->fixed_point);
};

Fixed	&Fixed ::operator= (const Fixed& op)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if(this != &op)
	{
		fixed_point = op.getRawBits();
	}
	return(*this);// protection from selfgiving values to the variables
};

/// diff ex01
Fixed::Fixed(const int &a)//A constructor that takes a constant integer as a parameter.
{
	//std::cout << "Int constructor called" << std::endl;
	this->fixed_point = a << fract;
};
Fixed::Fixed(const float &b)//A constructor that takes a constant floating-point number as a parameter.
{
	//std::cout << "Float constructor called" << std::endl;
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

bool	Fixed ::operator<(const Fixed& op)const
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
//diff ex02
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
Fixed	Fixed ::operator++(int)
{
	--fixed_point;
	return(*this);
};

Fixed	Fixed ::operator--(int)
{
	--fixed_point;
	return(*this);
};