/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:57:23 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/04 14:51:51 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
//////////exceptions
const char* Form::GradeTooHighException::what() const noexcept
{
	return "Form: Too high";
}

const char* Form::GradeTooLowException::what() const noexcept
{
	return "Form: Too low";
}


//////oper overload
std::ostream& operator<<(std::ostream& out, const Form& obj)
{
	out<< "Form with name : "<<obj.getFormName() << " is it signed :"<< obj.getIsSigned() \
		<< " signed garde is :" <<obj.getSignGrade() << " execute garde is :"<< obj.getExecuteGrade() << std::endl;  
	return(out);
}

//////////getters
std::string Form::getFormName() const// const the function will not modify any member variables of the object
{
	return(this->_form_name);
}
bool Form::getIsSigned() const
{
	return(this->_isSigned);
}
int Form::getSignGrade()const
{
	return(_sign_grade);
}
int Form::getExecuteGrade() const
{
	return(this->_execute_grade);
}


///////constructors

Form::Form() : _form_name("Form KOKO"), _isSigned(false), _sign_grade(150), _execute_grade(150)
{
	std::cout << "Form default constrcutor called" << std::endl;
}
Form::Form(const Form &copy): _form_name(copy._form_name), _isSigned(copy._isSigned),_sign_grade(copy._sign_grade), _execute_grade(copy._execute_grade)
{
	std::cout << "Form Copy constructor called" << std::endl;
}
Form::Form(const std::string form_name, const int sign_grade, const int execute_grade): _form_name(form_name),_sign_grade(sign_grade), _execute_grade(execute_grade)
{
	std::cout << "Form Copy string constructor called" << std::endl;
	if(sign_grade > 150 || execute_grade > 150)
	{
		throw GradeTooLowException();
	}
	if(sign_grade < 0 || execute_grade < 0)
	{
		throw GradeTooHighException();
	}
};
Form& Form:: operator=(const Form& copy)
{
	std::cout << "Form Copy Assigment operator" << std::endl;
	if(this == &copy)
		return(*this);
	this->_isSigned = copy._isSigned;
	return(*this);
};
Form::~Form()
{
	std::cout << "Form Destcrutor" << std::endl;
};

///////member fucntions
void Form::beSigned(Bureaucrat &obj)
{
	if(obj.getGrade() < this->getSignGrade())
	{
		this->_isSigned = true;
	}
	else
		throw GradeTooLowException();
	
};