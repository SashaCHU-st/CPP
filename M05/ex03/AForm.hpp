/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:57:57 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/04 13:31:45 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"


class Bureaucrat;
class AForm
{
	private:
		const	std::string		_form_name;
		bool					_isSigned;
		const int				_sign_grade;
		const int				_execute_grade;
	public:
		AForm();
		AForm(const AForm &copy);
		AForm(const std::string _form_name, const int _sign_grade, const int _execute_grade);
		AForm& operator=(const AForm& copy);
		virtual ~AForm();
		
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
		
		virtual void execute(Bureaucrat const & executor) const = 0;
		
};

std::ostream& operator<<(std::ostream& out, const AForm& obj);// An overload of the insertion («) operator
#endif