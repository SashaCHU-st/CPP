/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:57:57 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/07 10:02:54 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"


class Bureaucrat;
class Form
{
	private:
		const	std::string		_form_name;
		bool					_isSigned = false;
		const int				_sign_grade;
		const int				_execute_grade;
	public:
		Form();
		Form(const Form &copy);
		Form(const std::string _form_name, const int _sign_grade, const int _execute_grade);
		Form& operator=(const Form& copy);
		~Form();
		
		////// getters 
		std::string getFormName() const;// const the function will not modify any member variables of the object
		bool getIsSigned() const;
		int getSignGrade()const ;
		int getExecuteGrade() const;


		/////member functions
		void beSigned(Bureaucrat &obj);
		///////exceptions
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const noexcept override;
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const noexcept override;
		};
		
		
};

std::ostream& operator<<(std::ostream& out, const Form& obj);// An overload of the insertion («) operator
#endif