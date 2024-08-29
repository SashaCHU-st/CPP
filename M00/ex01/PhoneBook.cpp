/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:11:15 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/29 12:38:37 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.hpp"
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
			unsigned number = 0;
			if(phonebook.at_least_one == true)
			{
				phonebook.displayAllContacts();
				std::cout << "Please write index of contact you want to check: \n";
				while (1)
				{
					std::getline(std::cin, input);
					if(is_digits(input) && input != "")
					{
						number = stoul(input);
						break ;
					}
					else
					{
						std::cout << "Only digit please\n";
						std::cout << "Try again please: \n";
					}
				}
					if(number == 9)
					{
						std::cout << "Phonebook have only 8 contacts\n";
					}
					if(number < 9)
						phonebook.displayContacts(number);
			}
			else
				std::cout << "Nothing to display, please add first" << "\n";
		}
		else if (input == "EXIT" || input == "exit" || input == "Exit")
		{
			std::cout << "Exit" << std::endl;
			break;
		}
	}

	return 0;
}
