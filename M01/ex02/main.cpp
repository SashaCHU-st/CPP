/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:31:22 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/26 08:44:07 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;


int main(void)
{
	string str =  "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;

	//The memory address of the string variable.
	cout << "• The memory address of the string variable " << &str << endl;
	///The memory address held by stringPTR.
	cout << "• The memory address held by stringPTR " <<  stringPTR << endl;
	//The memory address held by stringREF
	cout << "• The memory address held by stringREF " <<  &stringREF << endl;
	//The value of the string variable
	cout << "• The value of the string variable " << str << endl;
	//
	cout << "• The value pointed to by stringPTR "<< *stringPTR << endl;
	//
	cout << "• The value pointed to by stringREF " <<  stringREF <<endl;
	
	return(0);
}
	//cout << *stringREF << endl;