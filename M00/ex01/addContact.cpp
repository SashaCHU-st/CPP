/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:10:12 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/06 14:39:08 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.hpp"

int is_digits(const std::string& str)
{
	for (unsigned i = 0; i < str.length(); ++i)
	{
		char ch = str[i];
		if (!isdigit(ch))
			return (0);
	}
	return(1);
}

Contact addingNew()
{
	Contact contact;
	std::string input = "";

	std::cout << "First name: ";
	while(1)
	{
		if (std::cin.eof())
			break ;
		std::getline(std::cin, input);
		if(input != "")
		{
			contact.set_fn(input);
			break;
		}
		else
			std::cout << "Try again please: \n";
	}

	std::cout << "Last name: ";
	while(1)
	{
		if (std::cin.eof())
			break ;
		std::getline(std::cin, input);
		if(input != "")
		{
			contact.set_ln(input);
			break;
		}
		else
			std::cout << "Try again please:\n";
	}

	std::cout << "Nickname: ";
	while(1)
	{
		if (std::cin.eof())
			break ;
		std::getline(std::cin, input);
		if(input != "")
		{
			contact.set_nn(input);
			break;
		}
		else
			std::cout << "Try again please: \n";
	}

	std::cout << "Phone number: ";
	while(1)
	{
		if (std::cin.eof())
			break ;
		std::getline(std::cin, input);
		if(is_digits(input) && input != "")
		{
			contact.set_pn(input);
			break;
		}
		else
		{
			std::cout << "Only digits please\n";
			std::cout << "Try again please: \n";
		}
	}

	std::cout << "Darkest secret: ";
	while(1)
	{
		if (std::cin.eof())
			break ;
		std::getline(std::cin, input);
		if(input != "")
		{
			contact.set_ds(input);
			break;
		}
		else
			std::cout << "Try again please:\n";
	}

	return(contact);
}
