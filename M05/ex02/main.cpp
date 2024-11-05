/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:38:31 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/05 14:09:29 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"


int main ()
{
	////////////////////////////////////////EXERISE 3

	/////Presedential
	// try
	// {
	// 	PresidentialPardonForm one("FIRST");
		
	// 	std::cout << "\033[31m" << "\nPresindetial Form one created with default name" <<"\033[0m" << std::endl;
	// 	std::cout << one << std::endl;

	// 	std::cout << "\033[31m" << "\nBureacrat kuku created with name kuku" <<"\033[0m" << std::endl;
	// 	Bureaucrat kuku ("kuku", 25);
		
	// 	std::cout << "\033[31m" << "\nForm is not signed if bur. grade is more than 25" <<"\033[0m" << std::endl;
	// 	one.beSigned(kuku);
	// 	one.execute(kuku);

		
	// 	std::cout << "\033[34m" << "\nDESTRUCTORS" <<"\033[0m" << std::endl;
	// }
	//  catch(Bureaucrat::GradeTooHighException& e){
	// 	std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO HIGH
	// }
	// catch(Bureaucrat::GradeTooLowException& e){
	// 	std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO LOW
	// }
	// catch(AForm::GradeTooHighException& e){
	// 	std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO HIGH
	// }
	// catch(AForm::GradeTooLowException& e){
	// 	std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO LOW 
	// }
	
	//////////////Robotomy
	// try
	// {
	// 	RobotomyRequestForm one("FIRST");
		
	// 	std::cout << "\033[31m" << "\nPresindetial Form one created with default name" <<"\033[0m" << std::endl;
	// 	std::cout << one << std::endl;

	// 	std::cout << "\033[31m" << "\nBureacrat kuku created with name kuku" <<"\033[0m" << std::endl;
	// 	Bureaucrat kuku ("kuku", 25);
		
	// 	std::cout << "\033[31m" << "\nForm is not signed if bur. grade is more than 25" <<"\033[0m" << std::endl;
	// 	one.beSigned(kuku);
	// 	one.execute(kuku);

		
	// 	std::cout << "\033[34m" << "\nDESTRUCTORS" <<"\033[0m" << std::endl;
	// }
	//  catch(Bureaucrat::GradeTooHighException& e){
	// 	std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO HIGH
	// }
	// catch(Bureaucrat::GradeTooLowException& e){
	// 	std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO LOW
	// }
	// catch(AForm::GradeTooHighException& e){
	// 	std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO HIGH
	// }
	// catch(AForm::GradeTooLowException& e){
	// 	std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO LOW 
	// }
	


	////Shrubbery
	try
	{
		ShrubberyCreationForm one("FIRST");
		
		std::cout << "\033[31m" << "\nPresindetial Form one created with default name" <<"\033[0m" << std::endl;
		std::cout << one << std::endl;

		std::cout << "\033[31m" << "\nBureacrat kuku created with name kuku" <<"\033[0m" << std::endl;
		Bureaucrat kuku ("kuku", 25);
		
		std::cout << "\033[31m" << "\nForm is not signed if bur. grade is more than 25" <<"\033[0m" << std::endl;
		one.beSigned(kuku);
		one.execute(kuku);

		
		std::cout << "\033[34m" << "\nDESTRUCTORS" <<"\033[0m" << std::endl;
	}
	 catch(Bureaucrat::GradeTooHighException& e){
		std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO HIGH
	}
	catch(Bureaucrat::GradeTooLowException& e){
		std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO LOW
	}
	catch(AForm::GradeTooHighException& e){
		std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO HIGH
	}
	catch(AForm::GradeTooLowException& e){
		std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO LOW 
	}
	
	return(0);
}