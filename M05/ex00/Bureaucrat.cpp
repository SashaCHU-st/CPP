/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:22:50 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/01 17:32:08 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::string Bureaucrat:: getName(void) const
{
	return(this->_name);
};
int Bureaucrat:: getGrade(void) const
{
	return(this->_grade);
};

int Bureaucrat::increment()
{
	if(this->_grade < 1)
	{
		throw GradeTooHighException();
	}
	if(this->_grade > 150)
	{
		throw GradeTooLowException();
	}
	else
		this->_grade--;

};
int Bureaucrat::decrement()
{
	if(this->_grade < 1)
	{
		throw GradeTooHighException();
	}
	if(this->_grade > 150)
	{
		throw GradeTooLowException();
	}
	else
		this->_grade++;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj)
{
	out<< obj.getName() << ", bureaucrat grade "<< obj.getGrade() ;
	return(out);
}



Bureaucrat::Bureaucrat() : _name("KUKU"), _grade(150)// since it is const it can be init only when constructor creating
{
	std::cout << "Constructor called" << std::endl;
};

Bureaucrat::Bureaucrat(const std::string name, int _grade)
{
	if(_grade < 1)
	{
		throw GradeTooHighException();
	}
	if(_grade > 150)
	{
		throw GradeTooLowException();
	}
	else
		this->_grade = _grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
	std::cout << "Copy constrcutor called" << std::endl;
};
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	if(this == &copy)
		return(*this);
	this->_grade = copy._grade;// no dfor name because _name is const
	std::cout << "Assigment operator called" << std::endl;
	return(*this);
};
Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
};