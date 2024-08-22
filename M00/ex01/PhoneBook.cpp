/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:00:55 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/21 14:29:57 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
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

class PhoneBook
{
	private:
		static const unsigned maxContacts = 8;
		Contact contacts[maxContacts];
		unsigned index = 1;
	public:
		void createContact(Contact contact)
		{
			if (index < maxContacts)
				contacts[index++] = contact;
			else
			{
				cout << "PhoneBook is full, replacing the last one" << endl;
				contacts[index - 1] = contact;
				index++;
			}
		}
		void displayContacts(unsigned i)
		{
			unsigned count;
			if (index < maxContacts)
				count = index;
			else
				count = maxContacts;
			string first_name = contacts[i].get_fn();
			string last_name = contacts[i].get_ln();
			string nick_name = contacts[i].get_nn();
			unsigned phone = contacts[i].get_pn();
			string dark = contacts[i].get_ds();
				cout << "Index: "<< i <<  endl;
				cout << "First name: " << first_name << endl;
				cout << "Last name: "  << last_name << endl;
				cout << "Nickname: "  << nick_name << endl;
				cout << "Phone: "  << phone << endl;
		}
		void displayAllContacts()
		{
			unsigned count;
			if (index < maxContacts)
				count = index;
			else
				count = maxContacts;
			for(unsigned i = 1; i < count; i++)
			{
				string first_name = contacts[i].get_fn();
				string last_name = contacts[i].get_ln();
				string nick_name = contacts[i].get_nn();
				int length_fn = first_name.length();
				int length_ln = last_name.length();
				int length_nn = nick_name.length();
				if (length_fn > 10)
					first_name = first_name.substr(0, 9) + ".";
				if (length_ln > 10)
					last_name = last_name.substr(0, 9) + ".";
				if (length_nn > 10)
					nick_name = nick_name.substr(0, 9) + ".";
					cout << std::setw(10) << std::right << i
					<< "|" << std::setw(10) << std::right << first_name 
					<< "|" << std::setw(10) << std::right << last_name 
					<< "|" << std::setw(10) << std::right << nick_name 
					<< "|" << endl;
			}
		}
};

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
	std::getline(std::cin, input);
	contact.set_fn(input);

	cout << "Last name: ";
	std::getline(std::cin, input);
	contact.set_ln(input);

	cout << "Nickname: ";
	std::getline(std::cin, input);
	contact.set_nn(input);

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
			cout << "Only digit please" << endl;
			cout << "Try again please: " << endl;
	}
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