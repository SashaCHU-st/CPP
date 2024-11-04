/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:38:31 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/04 14:38:37 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

int main ()
{
	/////////////////////////FIRST EXERCISE////////////////////////////////
	//////////////TESTING << OPE, ASSIGMNET OPP, AND COPY CONSTRCUTOR
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
	

	// /////////////////////////////////////TESTING HIGH GRADES AND LOW
	// std::cout << "\033[31m" << "\nFIRST(TOO HIGH) GRADE 0" <<"\033[0m" << std::endl;
	// try {
	// 	Bureaucrat first("FIRST(TOO HIGH)", 0);
	// }
	// catch(std::exception& e){
	// 	std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO HIGH = 0
	// }
	
	// std::cout << "\033[31m" << "\nFIRST(HIGHEST) GRADE 1" <<"\033[0m" << std::endl;
	// try {
	// 	Bureaucrat first("SECOND, HIGHEST (1)", 1);// JUST RRADE 1
	// }
	// catch(std::exception& e){
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << "\033[31m" << "\nFIRST(TOO LOW) GRADE 151" <<"\033[0m" << std::endl;
	// try {
	// 	Bureaucrat first("FIRST(TOO LOW)", 151); // TOO LPW = 150
	// }
	// catch(std::exception& e){
	// 	std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO LOW
	// }
	
	// std::cout << "\033[31m" << "\nFIRST(HIGHEST) GRADE 150" <<"\033[0m" << std::endl;
	// try {
	// 	Bureaucrat first("SECOND, LOWEST(150)", 150);/// JUST 150
	// }
	// catch(std::exception& e){
	// 	std::cout << e.what() << std::endl;
	// }
	


	///////////////////////////////////////TESTING INCREMNET DECREMENT

	// std::cout << "\033[31m" << "\nFIRST(LOW) GRADE 150" <<"\033[0m" << std::endl;
	// try {
	// 	Bureaucrat first("FIRST(LOW)", 150);
	// 	first.increment(); //SHOULD BE 150 -1  = 149
	// }
	// catch(std::exception& e){
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << "\033[31m" << "\nTEST2 DECREMENTING CATCHING ERROR FROM 150 + 1" <<"\033[0m" << std::endl;
	// try {
	// 	Bureaucrat test2("FIRST(LOW)", 150);
	// 	test2.decrement();//Should be too low becuase over 150
	// }
	// catch(std::exception& e){
	// 	std::cout << e.what() << std::endl;
	// }


	// std::cout << "\033[31m" << "\nTEST AS IN SUBJECT GRADE 3" <<"\033[0m" << std::endl;
	// try {
	// 	Bureaucrat test("TEST 3", 3);
	// 	test.increment(); //SHOULD BE 3 -1 = 2
	// }
	// catch(std::exception& e){
	// 	std::cout << e.what() << std::endl; 
	// }
	
	
	// std::cout << "\033[31m" << "\nSECOND (HIGHEST) GRADE 1" <<"\033[0m" << std::endl;
	// try {
	// 	Bureaucrat second("SECOND, HIGH", 1);
	// 	second.decrement(); //SHOULD BE 1 + 1 = 2
	// }
	// catch(std::exception& e){
	// 	std::cout << e.what() << std::endl;
	// }


	/////////////////////////////////////////////SECOND EXERCISE

	// try
	// {

	// 	///Cannot sign 
	// 	std::cout << "\033[32m" << "EXAMPLE WITH CANNOT SIGN FORM" <<"\033[0m" << std::endl;
	// 	std::cout << "\033[31m" << "\nCREATING BUREACRAT" <<"\033[0m" << std::endl;
	// 	Bureaucrat kuku("kuku", 90);
			
	// 	std::cout << "\033[31m" << "\nCREATING FORM" <<"\033[0m" << std::endl;
	// 	Form Form_test("GOOD FORM", 20,20);

	// 	std::cout << "\033[31m" << "\nTESTING << OPERATOR" <<"\033[0m" << std::endl;
	// 	std::cout << Form_test;

	// 	kuku.signForm(Form_test);
	// 	std::cout <<"Checking was it signed? => " << Form_test.getIsSigned()<< std::endl;//SHOULD  BE 0 BECAUSE WAS NOT ABLE TO SIGN

	// 	///Can sign
	// 	std::cout << "\033[32m" << "\nEXAMPLE WITH CAN SIGN FORM" <<"\033[0m" << std::endl;
	// 	std::cout << "\033[31m" << "\nCREATING BUREACRAT" <<"\033[0m" << std::endl;
	// 	Bureaucrat kuku2("kuku", 10);
			
	// 	std::cout << "\033[31m" << "\nCREATING FORM" <<"\033[0m" << std::endl;
	// 	Form Form_test2("GOOD FORM", 20,20 );

	// 	std::cout << "\033[31m" << "\nTESTING << OPERATOR" <<"\033[0m" << std::endl;
	// 	std::cout << Form_test2;

	// 	kuku2.signForm(Form_test2);
	// 	std::cout << "Checking was it signed? => " << Form_test2.getIsSigned()<<std::endl;///SHOULD BE 1

		
	// 	std::cout << "\033[32m" << "\nTESTING ASSIGMNET OPERATOR" <<"\033[0m" << std::endl;
	// 	std::cout <<"FORM TEST: "<< Form_test;
	// 	std::cout <<"FORM TEST2: "<< Form_test2;
		
	// 	std::cout << "\033[31m" << "\nTESTING ASSIGMENT OPERATOR" <<"\033[0m" << std::endl;
	// 	Form_test =  Form_test2; // testng assigment oper 

	// 	std::cout << "\033[31m" << "\nTESTING FORM_TEST SHOULD BECAME FORM_TEST2 => isSinged = 1; AFTER ASSIGMENT OP" <<"\033[0m" << std::endl;
	// 	std::cout << Form_test << std::endl;



	// 	std::cout << "\033[34m" << "\nDESTCRUCTORS" <<"\033[0m" << std::endl;

	// }
	// catch(Bureaucrat::GradeTooHighException& e){
	// 	std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO HIGH
	// }
	// catch(Bureaucrat::GradeTooLowException& e){
	// 	std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO LOW
	// }
	// catch(Form::GradeTooHighException& e){
	// 	std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO HIGH
	// }
	// catch(Form::GradeTooLowException& e){
	// 	std::cout << e.what() << std::endl; /// SHOULD CATCH ERROR TOO LOW 
	// }



	////////////////////////////////////////EXERISE 3


	
	
	
	return(0);
}