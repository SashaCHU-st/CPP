/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:11:15 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/26 14:13:08 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
# include "Contact.hpp"
# include "PhoneBook.hpp"
#include "own.hpp"
using namespace std;
int main()
{
	PhoneBook phonebook;
	std::string input = "";

	while (true)
	{
		std::cout << "Enter command ";
		std::getline(std::cin, input);

		if (input == "ADD" || input == "add" || input == "Add")
		{
			Contact contact = addingNew();
			phonebook.createContact(contact);
		}
		else if (input == "SEARCH" || input == "search" || input == "Search")
		{
			phonebook.displayAllContacts();
			std::cout << "Please write index of contact you want to check: " << endl;
			std::getline(std::cin, input);
			unsigned number = stoul(input);
			if(number == 9)
			{
				std::cout << "Phonebook have only 8 contacts" << endl;
			}
			if(number < 9)
				phonebook.displayContacts(number);
		}
		else if (input == "EXIT" || input == "exit" || input == "Exit")
		{
			std::cout << "Exit" << std::endl;
			break;
		}
	}

	return 0;
}
