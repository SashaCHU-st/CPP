/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:35:06 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/11 15:23:20 by aheinane         ###   ########.fr       */
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
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
		static Fixed& min( Fixed& a, Fixed& b);
		static Fixed& max( Fixed& a, Fixed& b);
		
		//operator
		Fixed& operator= (const Fixed& op);//assigmnet operator
		
		//comparison operators
		bool operator<(const Fixed& op)const;
		bool operator>(const Fixed& op)const;
		bool operator>=(const Fixed& op)const;
		bool operator<=(const Fixed& op)const;
		bool operator==(const Fixed& op)const;
		bool operator!=(const Fixed& op)const;

		// arithmetic operators
		Fixed operator+(const Fixed& op);
		Fixed operator-(const Fixed& op);
		Fixed operator/(const Fixed& op);
		Fixed operator*(const Fixed& op);
		

		//Префиксный инкремент (++a) возвращает ссылку на уже увеличенный объект, 
		//а постфиксный (a++) возвращает копию до изменения
		
		//PREincrement/decrement
		//++a(префиксный инкремент) сначала изменяет объект, а затем возвращает его новое значение,
		// поэтому используется, когда нужно получить и вывести обновлённое значение.
		Fixed& operator++();
		Fixed& operator--();

		//Postincrement/decrement
		//a++(постфиксный инкремент) возвращает копию объекта до увеличения //
		//и используется, когда нужно вывести исходное значение до изменения.
		Fixed operator++(int);
		Fixed operator--(int);
		
		//setter
		void setRawBits( int const raw );

		//getter
		int getRawBits( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fractPoint);// An overload of the insertion («) operator

#endif