/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:35:06 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/13 09:44:49 by aheinane         ###   ########.fr       */
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
		Fixed(const int &a);
		Fixed(const float &b);
		Fixed(const Fixed &copy);
		
		//desructor
		~Fixed();
		
		//member function
		float toFloat( void ) const;
		int toInt( void ) const;

		//operator
		Fixed& operator= (const Fixed& op); // = default;

		//setter
		void setRawBits( int const raw );

		//getter
		int getRawBits( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fractPoint);

#endif