/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:38:31 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/01 18:02:53 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	////////////////TESTING << OPE, ASSIGMNET OPP, AND COPY CONSTRCUTOR
	// Bureaucrat kuku; // creating kuku bur
	
	// std::cout << "\033[31m" << "\nTESTING << OPERATOR" <<"\033[0m" << std::endl;
	// std::cout << kuku << std::endl;//  testing << oper
	

	// std::cout << "\033[31m" << "\nTESTING COPY CONSTRUCTOR" <<"\033[0m" << std::endl;
	// Bureaucrat koko = kuku; // testing copy const
	// Bureaucrat kiki; // creating another kiki bur

	
	// std::cout << "\033[31m" << "\nTESTING ASSIGMENT OPERATOR" <<"\033[0m" << std::endl;
	// kiki = kuku; // testng assigment oper 

	// std::cout << "\033[31m" << "\nTESTING KIKI AFTER ASSIGMENT OP" <<"\033[0m" << std::endl;
	// std::cout << kiki << std::endl;//  testing KIKI after assi opp to kuku, should be same as kuku
	

	///////////////////////////////////////TESTING HIGH GRADES AND LOW
	// std::cout << "\033[31m" << "\nFIRST(TOO HIGH) GRADE 0" <<"\033[0m" << std::endl;
	// try {
	// 	Bureaucrat first("FIRST(TOO HIGH)", 0);
	// }
	// catch(std::exception& e){
	// 	std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO HIGH
	// }
	
	// std::cout << "\033[31m" << "\nFIRST(HIGHEST) GRADE 1" <<"\033[0m" << std::endl;
	// try {
	// 	Bureaucrat first("SECOND, HIGHEST (1)", 1);
	// }
	// catch(std::exception& e){
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << "\033[31m" << "\nFIRST(TOO LOW) GRADE 151" <<"\033[0m" << std::endl;
	// try {
	// 	Bureaucrat first("FIRST(TOO LOW)", 151);
	// }
	// catch(std::exception& e){
	// 	std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO LOW
	// }
	
	// std::cout << "\033[31m" << "\nFIRST(HIGHEST) GRADE 1" <<"\033[0m" << std::endl;
	// try {
	// 	Bureaucrat first("SECOND, LOWEST(150)", 150);
	// }
	// catch(std::exception& e){
	// 	std::cout << e.what() << std::endl;
	// }
	


	///////////////////////////////////////TESTING INCREMNET DECREMENT

	// std::cout << "\033[31m" << "\nFIRST(LOW) GRADE 150" <<"\033[0m" << std::endl;
	// try {
	// 	Bureaucrat first("FIRST(LOW)", 150);
	// 	first.increment();
	// }
	// catch(std::exception& e){
	// 	std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO LOW
	// }
	
	// std::cout << "\033[31m" << "\nFIRST(HIGHEST) GRADE 1" <<"\033[0m" << std::endl;
	// try {
	// 	Bureaucrat second("SECOND, HIGH", 1);
	// 	second.decrement();
	// }
	// catch(std::exception& e){
	// 	std::cout << e.what() << std::endl;
	// }

	
	return(0);
}