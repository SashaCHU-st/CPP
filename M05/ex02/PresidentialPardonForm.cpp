/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:16:38 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/04 14:54:12 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() :_target("Target kuku")
{
	std::cout << "PresidentialPardonForm default constrcutor called" << std::endl;
};
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	*this = copy;
	std::cout << "Presidential copy constrcutor called" << std::endl;
};	
PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target(target)
{
	std::cout << "PresidentialPardonForm string constructor with "<< this->_target << std::endl;
};
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	std::cout << "Presidential assigment copy constrcutor called" << std::endl;
	if(this == &copy)
		return(*this);
	this->_target = copy._target;
	return(*this);
};
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << " PresidentialPardonForm destcrutor" <<std::endl;
};

std::string PresidentialPardonForm::getTarget()const
{
	return(this->_target);
};
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if(executor.getGrade() < this->getSignGrade())
	{
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox."<<std::endl;
	}
	if (this->getIsSigned() == true)
	{
		std::cout << " already signed "<<std::endl;
	}
	else
		throw GradeTooLowException();
	
};