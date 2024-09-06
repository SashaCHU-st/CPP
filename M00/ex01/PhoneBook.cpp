/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:11:15 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/06 09:45:10 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.hpp"
int main()
{
	PhoneBook phonebook;
	std::string input = "";

	while (1)
	{
		std::cout << "Enter command ";
		std::getline(std::cin, input);

		if (input == "ADD")
		{
			Contact contact = addingNew();
			phonebook.createContact(contact);
		}
		else if (input == "SEARCH")
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
				if(number >= 9)
				{
					std::cout << "Phonebook have only 8 contacts\n";
				}
				if(number < 9)
					phonebook.displayContacts(number);
			}
			else
				std::cout << "Nothing to display, please add first" << "\n";
		}
		else if (input == "EXIT")
		{
			std::cout << "Exit/ BYE BYE SEE YOU LATER" << std::endl;
			break;
		}
		else
			std::cout << "Usage write ADD or SEARCH or EXIT" << std::endl;
	}

	return 0;
}
