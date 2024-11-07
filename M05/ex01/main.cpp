/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:38:31 by aheinane          #+#    #+#             */
/*   Updated: 2024/11/07 10:24:52 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	// /////////////////////////////////////////////SECOND EXERCISE
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


	// 	///Can sign if increment points 
	// 	std::cout << "\033[32m" << "\nEXAMPLE WITH CANNOT SIGN FORM, but if incemnet can" <<"\033[0m" << std::endl;
	// 	std::cout << "\033[31m" << "\nCREATING BUREACRAT" <<"\033[0m" << std::endl;
	// 	Bureaucrat koko("koko", 89);
			
	// 	std::cout << "\033[31m" << "\nCREATING FORM" <<"\033[0m" << std::endl;
	// 	Form Form_test3("GOOD FORM", 88,88);

	// 	std::cout << "\033[31m" << "\nTESTING << OPERATOR" <<"\033[0m" << std::endl;
	// 	std::cout << Form_test3;


	// 	std::cout << "\033[33m" << "\nTESTING SGNING WITH INCREMENTING" <<"\033[0m" << std::endl;


		
	// 	std::cout << "\033[31m" << "\nNOW HE CANNOT SIGN FORM" <<"\033[0m" << std::endl;
	// 	koko.signForm(Form_test3);
	// 	std::cout << "\033[31m" << "\nINCREMENTING 89 - 1 = 88" <<"\033[0m" << std::endl;
	// 	koko.increment();
	// 	std::cout << "\033[31m" << "\nNOW HE CAN" <<"\033[0m" << std::endl;
	// 	koko.signForm(Form_test3);
	// 	std::cout <<"Checking was it signed? => " << Form_test3.getIsSigned()<< std::endl;//SHOULD  BE 0 BECAUSE WAS NOT ABLE TO SIGN
		


		
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

	
	return(0);
}