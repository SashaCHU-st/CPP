/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:49:58 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/06 11:23:16 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

Intern::Intern()
{
	_name_for_form[0] = "PresidentialPardonForm";
	_name_for_form[1] = "RobotomyRequestForm";
	_name_for_form[2] = "ShrubberyCreationForm";
	
	std::cout<< "Intern Default constructor called" <<std::endl;
};
Intern::Intern(const Intern &copy)
{
	std::cout<< "Intern Copy constructor called" <<std::endl;
	*this = copy;
};
Intern& Intern::operator=(const Intern& copy)
{
	std::cout<< "Intern Copy assigemnet operator called" <<std::endl;
	if(this == &copy)
		return(*this);
	return(*this);
};
Intern::~Intern()
{
	std::cout<< "Intern Destructor called" <<std::endl;
};
AForm *Intern::make_PresForm()
{
	AForm *form;
	form = new PresidentialPardonForm();
	return(form);
};
AForm *Intern::make_ShrubForm()
{
	AForm *form;
	form = new ShrubberyCreationForm();
	return(form);
};
AForm *Intern::make_RobForm()
{
	AForm *form;
	form = new RobotomyRequestForm();
	return(form);
};
AForm*	Intern::makeForm(std::string name_for_form, std::string target )
{
	for(int i = 0; i< 3; i++)
	{
		if(name_for_form == _name_for_form[i])
		{
			if(name_for_form == "PresidentialPardonForm")
				return(make_PresForm());
			if(name_for_form == "RobotomyRequestForm")
				return(make_RobForm());
			else
				return(make_ShrubForm());
			std::cout << "Intern creates "<< target << std::endl;
		}
	}
	std::cout << "Intern cannot create this form (maybe not exist?)"<< std::endl;
	return (NULL);
}