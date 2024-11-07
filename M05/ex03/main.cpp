/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:38:31 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/07 09:38:50 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"


int main ()
{

	// std::cout << "\033[31m" << "//////ROBOTOMY//////" <<"\033[0m" << std::endl;
	// ///////ROBOTOMY
	// try
	// {
	// 	Intern someRandomIntern;
	// 	AForm* rrf;
	// 	rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");

	// 	std::cout << "\033[33m" << "CREATING BUREACRAT" <<"\033[0m" << std::endl;
	// 	Bureaucrat kuku ("Kuku", 5);// ok grade
	// 	//Bureaucrat kuku ("Kuku", 85); too low grade

	// 	rrf->beSigned(kuku);
	// 	std::cout << "\033[33m" << "executing , shuld be some sound" <<"\033[0m" << std::endl;
	// 	rrf->execute(kuku);

	// 	std::cout << "\033[34m" << "DESTRCUTORS" <<"\033[0m" << std::endl;
	// 	delete rrf;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }


	// std::cout << "\033[31m" << "\n///////PRESIDENTIAL///////" <<"\033[0m" << std::endl;
	// ///////Presidential
	// try
	// {
	// 	Intern someRandomIntern;
	// 	AForm* prf;
	// 	prf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
	// 	std::cout << "\033[33m" << "CREATING BUREACRAT" <<"\033[0m" << std::endl;
	// 	Bureaucrat kuku ("Kuku", 5);// ok grade
	// 	//Bureaucrat kuku ("Kuku", 85); ////too low grade

	// 	prf->beSigned(kuku);
	// 	std::cout << "\033[33m" << "executing ,SHOUDL PARDON TARGET" <<"\033[0m" << std::endl;
	// 	prf->execute(kuku);
	// 	std::cout << "\033[34m" << "DESTRCUTORS" <<"\033[0m" << std::endl;
	// 	delete prf;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	
	// std::cout << "\033[31m" << "\n//////SHRUBBERY/////" <<"\033[0m" << std::endl;
	// //ShrubberyCreationForm
	// try
	// {
	// 	Intern someRandomIntern;
	// 	AForm* scf;
	// 	scf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
	// 	std::cout << "\033[33m" << "CREATING BUREACRAT" <<"\033[0m" << std::endl;
	// 	Bureaucrat kuku ("Kuku", 5);// ok grade
	// 	//Bureaucrat kuku ("Kuku", 148); ////too low grade

	// 	scf->beSigned(kuku);
	// 	std::cout << "\033[33m" << "executing ,CREATING FILE WITH TREE" <<"\033[0m" << std::endl;
	// 	scf->execute(kuku);
	// 	std::cout << "\033[34m" << "DESTRCUTORS" <<"\033[0m" << std::endl;
	// 	delete scf;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	return(0);
}