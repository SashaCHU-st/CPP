/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:35:06 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/11 12:54:49 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixed_point;
		static const int fract = 8;
	
	public:
		//Constrcutors;
		Fixed();
		Fixed(const int &a);//A constructor that takes a constant integer as a parameter.
		Fixed(const float &b);//A constructor that takes a constant floating-point number as a parameter.
		Fixed(Fixed const &copy);//opeartor copirivaniya
		
		//desructor
		~Fixed();
		
		//member function
		float toFloat( void ) const;
		int toInt( void ) const;

		//operator
		Fixed& operator= (const Fixed& op);//assigmnet operator

		//setter
		void setRawBits( int const raw );

		//getter
		int getRawBits( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fractPoint);// An overload of the insertion («) operator

#endif