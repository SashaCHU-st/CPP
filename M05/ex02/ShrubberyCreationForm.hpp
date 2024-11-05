/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:16:54 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/05 14:04:35 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>  
#include "AForm.hpp"


class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
	private:
		std::string		_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);
		~ShrubberyCreationForm();

		std::string getTarget()const;
		void execute(Bureaucrat const & executor) const;
		
};
#endif