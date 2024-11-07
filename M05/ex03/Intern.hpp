/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:48:46 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/07 09:34:33 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern
{
	private:
		std::string _name_for_form[3];
		
	public:
		Intern();
		Intern(const Intern &copy);
		Intern& operator=(const Intern& copy);
		~Intern();
		
		AForm	*makeForm(const std::string name_for_form, const std::string target );
		static AForm *make_PresForm(std::string const target);
		static AForm *make_ShrubForm(std::string const target);
		static AForm *make_RobForm(std::string const target);
		
};

#endif