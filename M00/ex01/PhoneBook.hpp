/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:15:26 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/26 11:26:47 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

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

#endif