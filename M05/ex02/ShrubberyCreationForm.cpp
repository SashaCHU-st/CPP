/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:16:52 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/07 09:06:01 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm default constrcutor called" << std::endl;
	this->_target = "Target kuku";
};
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	std::cout << "ShrubberyCreationForm copy constrcutor called" << std::endl;
	*this = copy;
};	
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm string constructor with "<< this->_target << std::endl;
	this->_target =target;
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
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
	{
		std::cout << "Form is not signed, maybe need to be signe first?"<<std::endl;
	}
	else
	{
		if(executor.getGrade() <= this->getSignGrade() && this->getExecuteGrade() >= 1)
		{
			std::string filename = this->_target + "_shrubbery";
			std::ofstream outfile (filename);
			if(outfile.is_open())
			{
				outfile <<"     oxoxoo    ooxoo" << std::endl;
				outfile <<"  ooxoxo oo  oxoxooo" << std::endl;
				outfile <<" oooo xxoxoo ooo ooox" << std::endl;
				outfile <<" oxo o oxoxo  xoxxoxo" << std::endl;
				outfile <<"  oxo xooxoooo o ooo" << std::endl;
				outfile <<"    ooo\\oo\\  /o/o" << std::endl;
				outfile <<"        \\  \\/ /" << std::endl;
				outfile <<"         |   /" << std::endl;
				outfile <<"         |  |" << std::endl;
				outfile <<"         | D|" << std::endl;
				outfile <<"         |  |" << std::endl;
				outfile <<"         |  |" << std::endl;
				outfile <<"  ______/____\\____";
			}
			outfile.close();
		}
		else
		{
			throw GradeTooLowException();
		}
	}
};