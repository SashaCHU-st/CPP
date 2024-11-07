/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:16:38 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/05 11:41:54 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm default constrcutor called" << std::endl;
	this->_target = "Target kuku";
};
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy.getFormName(), copy.getSignGrade(), copy.getExecuteGrade())
{
	*this = copy;
	std::cout << "Presidential copy constrcutor called" << std::endl;
};	
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm string constructor with "<< this->_target << std::endl;
	this->_target= target;
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
	
	if (this->getIsSigned() == false)
	{
		std::cout << "Form is not signed, maybe need to be signe first?"<<std::endl;
	}
	else
	{
		if(executor.getGrade() <= this->getExecuteGrade())
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox."<<std::endl;
		else
			throw GradeTooLowException();
	}
	
	
};