/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:48:46 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/06 11:03:49 by aheinane         ###   ########.fr       */
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
		AForm *make_PresForm();
		AForm *make_ShrubForm();
		AForm *make_RobForm();
		
	public:
		Intern();
		Intern(const Intern &copy);
		Intern& operator=(const Intern& copy);
		~Intern();
		
		AForm	*makeForm(std::string name_for_form, std::string target );
		
};

#endif