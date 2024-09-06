/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:31:22 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/06 10:31:19 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main(void)
{
	std::string str =  "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "• The memory address of the string variable " << &str << std::endl;
	std::cout << "• The memory address held by stringPTR " <<  stringPTR << std::endl;
	std:: cout << "• The memory address held by stringREF " <<  &stringREF << std::endl;
	std:: cout << "• The value of the string variable " << str << std::endl;
	std::cout << "• The value pointed to by stringPTR "<< *stringPTR << std::endl;
	std::cout << "• The value pointed to by stringREF " <<  stringREF <<std::endl;
	
	return(0);
}