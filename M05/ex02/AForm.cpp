/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:57:23 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/05 11:42:11 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
//////////exceptions
const char* AForm::GradeTooHighException::what() const noexcept
{
	return "AForm: Too high";
}

const char* AForm::GradeTooLowException::what() const noexcept
{
	return "AForm: Too low";
}


//////oper overload
std::ostream& operator<<(std::ostream& out, const AForm& obj)
{
	out<< "AForm with name : "<<obj.getFormName() << " is it signed :"<< obj.getIsSigned() \
		<< " signed garde is :" <<obj.getSignGrade() << " execute garde is :"<< obj.getExecuteGrade() << std::endl;  
	return(out);
}

//////////getters
std::string AForm::getFormName() const// const the function will not modify any member variables of the object
{
	return(this->_form_name);
}
bool AForm::getIsSigned() const
{
	return(this->_isSigned);
}
int AForm::getSignGrade()const
{
	return(_sign_grade);
}
int AForm::getExecuteGrade() const
{
	return(this->_execute_grade);
}


///////constructors

AForm::AForm() : _form_name("Form KOKO"), _isSigned(false), _sign_grade(150), _execute_grade(150)
{
	std::cout << "AForm default constrcutor called" << std::endl;
}
AForm::AForm(const AForm &copy): _form_name(copy._form_name), _isSigned(copy._isSigned),_sign_grade(copy._sign_grade), _execute_grade(copy._execute_grade)
{
	std::cout << "AForm Copy constructor called" << std::endl;
}
AForm::AForm(const std::string form_name, const int sign_grade, const int execute_grade): _form_name(form_name),_sign_grade(sign_grade), _execute_grade(execute_grade)
{
	std::cout << "AForm Copy string constructor called" << std::endl;
	if(sign_grade > 150 || execute_grade > 150)
	{
		throw GradeTooLowException();
	}
	if(sign_grade < 0 || execute_grade < 0)
	{
		throw GradeTooHighException();
	}
};
AForm& AForm:: operator=(const AForm& copy)
{
	std::cout << "AForm Copy Assigment operator" << std::endl;
	if(this == &copy)
		return(*this);
	this->_isSigned = copy._isSigned;
	return(*this);
};
AForm::~AForm()
{
	std::cout << "AForm Destcrutor" << std::endl;
};

///////member fucntions
void AForm::beSigned(Bureaucrat &obj)
{
	if(obj.getGrade() <= this->getSignGrade())
	{
		this->_isSigned = true;
	}
	else
		throw GradeTooLowException();
	
};