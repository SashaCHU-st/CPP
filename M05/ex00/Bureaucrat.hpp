/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:22:54 by aheinane          #+#    #+#             */
/*   Updated: 2024/10/31 13:59:04 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string	_name;
		int 				_grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat& copy);
		~Bureaucrat();

		
		const std::string getName(std::string _name);
		int getGrade(std::string _grade);

		// GradeTooHighException();
		// GradeTooLowException()
		
		
		
	
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj);// An overload of the insertion («) operator

#endif