/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:16:46 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/04 14:34:38 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :_target("Target kuku")
{
	std::cout << "RobotomyRequestForm default constrcutor called" << std::endl;
};
RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target)
{
	std::cout << "RobotomyRequestForm string constructor with "<< this->_target << std::endl;
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
// void RobotomyRequestForm::execute(Bureaucrat const & executor) const
// {
	
// };