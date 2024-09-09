/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:35:06 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/09 14:46:09 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int fixed_point;
		static const int fract = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed& operator= (const Fixed& op);
		void setRawBits( int const raw );
		int getRawBits( void ) const;
};

#endif