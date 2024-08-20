/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:00:55 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/19 14:09:37 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

class Contact
{
	private:
		string firstName;
		string lastName;
		string nickname;
		unsigned phoneNumber;
		string darkestSecret;
	public:
///setters

		void set_fn(string s_firstName)
		{
			this->firstName = s_firstName;
		}
		void set_ln(string s_lastName)
		{
			this->lastName = s_lastName;
		}
		void set_nn(string s_nickName)
		{
			this->nickname = s_nickName;
		}
		void set_pn(unsigned s_phoneNumber)
		{
			this->phoneNumber = s_phoneNumber;
		}
		void set_ds(string s_darkestSecret)
		{
			this->darkestSecret = s_darkestSecret;
		}
////getters
		string get_fn()
		{
			return(this->firstName);
		}
		string get_ln()
		{
			return(this->lastName);
		}
		string get_nn()
		{
			return(this->nickname);
		}
		unsigned get_pn()
		{
			return(this->phoneNumber);
		}
		string get_ds()
		{
			return(this->darkestSecret);
		}
};

// void createContact(Contact contact)
// {
// 	for (int i = 0; i < maxContacts; i++)
// 	{
// 		cout << contact[i]<< endl;
// 	}
// }
class PhoneBook
{
	private:
		static const unsigned maxContacts = 8;
		Contact contacts[maxContacts];
		unsigned index = 0;  // Initialize index to 0
	public:
		void createContact(Contact contact)
		{
			if (index < maxContacts)
			{
				contacts[index++] = contact;
			}
			else
			{
				cout << "PhoneBook is full, replacing oldest contact." << endl;
				contacts[index % maxContacts] = contact;
				index++;
			}
		}

		void displayContacts()
		{
			unsigned count;

			if (index < maxContacts)
			{
				count = index;
			}
			else
			{
				count = maxContacts;
			}

			for (unsigned i = 0; i < count; i++)
			{
				cout << "Contact " << i + 1 << "| " << contacts[i].get_fn() << " "
				     << contacts[i].get_ln() << "| " << contacts[i].get_nn() << "| "
				     << contacts[i].get_pn() << "| " << contacts[i].get_ds() << endl;
			}
		}
};


Contact addingNew()
{
	Contact contact;
	std::string input = "";

	cout << "First name: ";
	std::getline(std::cin, input);
	contact.set_fn(input);

	cout << "Last name: ";
	std::getline(std::cin, input);
	contact.set_ln(input);

	cout << "nickname: ";
	std::getline(std::cin, input);
	contact.set_nn(input);

	cout << "Phone number: ";
	std::getline(std::cin, input);
	contact.set_fn(input);

	cout << "Darkest secret: ";
	std::getline(std::cin, input);
	contact.set_ds(input);

	return(contact);
}
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
			phonebook.displayContacts();
		}
		else if (input == "EXIT" || input == "exit" || input == "Exit")
		{
			std::cout << "Exit" << std::endl;
			break;
		}
	}

	return 0;
}