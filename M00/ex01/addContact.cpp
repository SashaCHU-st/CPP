/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:10:12 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/26 14:13:06 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.hpp"
int is_digits(string& str)
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

	cout << "First name: ";
	while(1)
	{
		std::getline(std::cin, input);
		if(input != "")
		{
			contact.set_fn(input);
			break;
		}
		else
			cout << "Try again please: " << endl;
	}
	

	cout << "Last name: ";
	while(1)
	{
		std::getline(std::cin, input);
		if(input != "")
		{
			contact.set_ln(input);
			break;
		}
		else
			cout << "Try again please: " << endl;
	}
	
	cout << "Nickname: ";
	while(1)
	{
		std::getline(std::cin, input);
		if(input != "")
		{
			contact.set_nn(input);
			break;
		}
		else
			cout << "Try again please: " << endl;
	}
	
	cout << "Phone number: ";
	while(1)
	{
		std::getline(std::cin, input);
		if (input.empty())
			break ;
		if(is_digits(input))
		{
			unsigned number = stoul(input);
			contact.set_pn(number);
			break ;
		}
		else
		{
			cout << "Only digit please" << endl;
			cout << "Try again please: " << endl;
		}
	}
	
	cout << "Darkest secret: ";
	while(1)
	{
		std::getline(std::cin, input);
		if(input != "")
		{
			contact.set_ds(input);
			break;
		}
		else
			cout << "Try again please: " << endl;
	}

	return(contact);
}
