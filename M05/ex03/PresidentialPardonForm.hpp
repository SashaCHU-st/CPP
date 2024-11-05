/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:16:43 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/04 14:41:16 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"


class Bureaucrat;

class PresidentialPardonForm : public AForm
{
	private:
		std::string		_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);
		~PresidentialPardonForm();

		std::string getTarget()const;
		void execute(Bureaucrat const & executor) const;
		
};
#endif