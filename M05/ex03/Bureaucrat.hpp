/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:22:54 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/07 10:10:54 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
	private:
		const std::string	_name;
		int 				_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int _grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat& copy);
		~Bureaucrat();

		
		std::string getName() const;// const the function will not modify any member variables of the object
		int getGrade()const ;

		////////member functions
		void signForm(AForm& form);
		void executeForm(AForm const & form);
		void increment();
		void decrement();

		class GradeTooHighException: public std::exception
		{
			public:
				const char* what() const noexcept override;
		};
		class GradeTooLowException: public std::exception
		{
			public:
				const char* what() const noexcept override;
		};
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj);// An overload of the insertion («) operator

#endif