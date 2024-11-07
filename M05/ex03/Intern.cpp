/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:49:58 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/07 09:34:01 by aheinane         ###   ########.fr       */
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
AForm *Intern::make_PresForm(std::string const target)
{
	AForm *form;
	form = new PresidentialPardonForm(target);
	return(form);
};
AForm *Intern::make_ShrubForm(std::string const target)
{
	AForm *form;
	form = new ShrubberyCreationForm(target);
	return(form);
};
AForm *Intern::make_RobForm(std::string const target)
{
	AForm *form;
	form = new RobotomyRequestForm(target);
	return(form);
};
AForm*	Intern::makeForm(const std::string name_for_form, const std::string target )
{
	AForm* (*formFunctions[])(std::string const target) = {&Intern::make_PresForm, &Intern::make_RobForm, &Intern::make_ShrubForm};/// creating array to fucntions pinters

	for (int i = 0; i < 3; i++) {
		if (name_for_form == _name_for_form[i]) {
			std::cout << "Intern creates " << target << std::endl;
			return (formFunctions[i](target));
		}
	}
	std::cout << "Intern cannot create this form (maybe not exist?)" << std::endl;
	return NULL;
}
