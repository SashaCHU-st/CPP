/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:16:46 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/05 13:56:52 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm default constrcutor called" << std::endl;
	this->_target = "Target kuku";
};
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm string constructor with "<< this->_target << std::endl;
	 this->_target =target;
};
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	std::cout << "RobotomyRequestForm copy constrcutor called" << std::endl;
	*this = copy;
};	
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	std::cout << "RobotomyRequestForm assigement copy constrcutor called" << std::endl;
	if(this == &copy)
		return(*this);
	this->_target = copy._target;
	return(*this);
};
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << " RobotomyRequestForm destcrutor" <<std::endl;
};

std::string RobotomyRequestForm::getTarget()const
{
	return(this->_target);
};
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	srand(time(0));
	int Nrandom = rand();
	
	if (this->getIsSigned() == false)
	{
		std::cout << "Form is not signed, maybe need to be signe first?"<<std::endl;
	}
	else
	{
		if(executor.getGrade() <= this->getSignGrade() && this->getExecuteGrade() >= 1)
		{
			if(Nrandom%2)
			{
				std::cout << "\033[32m" <<this->_target << "has been robotomized successfully" <<"\033[0m" <<std::endl;
				std::cout << this->_target << " Drum Drum Drum"<<std::endl;
			}
			else
				std::cout << "\033[31m" <<  "the robotomy failed" <<"\033[0m" <<std::endl;
		}
		else
		{
			std::cout << this->_target << "Failed: "<<std::endl;
			throw GradeTooLowException();
		}
	}
	
};