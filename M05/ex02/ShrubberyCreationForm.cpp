/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:16:52 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/04 14:36:14 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :_target("Target kuku")
{
	std::cout << "ShrubberyCreationForm default constrcutor called" << std::endl;
};
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	std::cout << "ShrubberyCreationForm copy constrcutor called" << std::endl;
	*this = copy;
};	
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target)
{
	std::cout << "ShrubberyCreationForm string constructor with "<< this->_target << std::endl;
};
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	std::cout << "ShrubberyCreationForm assigment copy constrcutor called" << std::endl;
	if(this == &copy)
		return(*this);
	this->_target = copy._target;
	return(*this);
};
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << " ShrubberyCreationForm destcrutor" <<std::endl;
};

std::string ShrubberyCreationForm::getTarget()const
{
	return(this->_target);
};
// void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
// {
	
// };