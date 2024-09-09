/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:35:06 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 17:47:32 by aheinane         ###   ########.fr       */
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
		Fixed();
		Fixed(const int &number)
		{
			std::cout << "Int constructor called" << std::endl;
			fixed_point = number <<fract;
		};
		// Fixed(const float &number)
		// {
		// 	std::cout << "Float constructor called" << std::endl;
		// 	fixed_point = (2^number)*fixed_point;
		// };
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed& operator= (const Fixed& op);
		// float toFloat( void ) const
		// {
		// };
		int toInt( void ) const
		{
			this->fixed_point *256 = 
		};
		void setRawBits( int const raw );
		int getRawBits( void ) const;
};

#endif