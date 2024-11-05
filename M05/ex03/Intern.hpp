/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:48:46 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/05 14:52:01 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <exception>

class Intern
{
	private:
	
	public:
		Intern();
		Intern(const Intern &copy);
		Intern& operator=(const Intern& copy);
		~Intern();
		
};

#endif