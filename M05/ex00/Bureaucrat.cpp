/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:22:50 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/31 14:09:40 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const std::string Bureaucrat:: getName(std::string _name)
{
	return(this->_name);
};
int Bureaucrat:: getGrade(std::string _grade)
{
	return(this->_grade);
};




Bureaucrat::Bureaucrat() : _name("KUKU"), _grade(1)// since it is const it cand be init only when constr craeting
{
	std::cout << "Constructor called" << std::endl;
};
Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
	std::cout << "Copy constrcutor called" << std::endl;
};
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	if(this == &copy)
		return(*this);
	this->_grade = copy._grade;
	std::cout << "Assigment operator called" << std::endl;
	return(*this);
};
Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
};