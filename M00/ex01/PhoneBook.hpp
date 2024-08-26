/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:15:26 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/26 14:12:53 by aheinane         ###   ########.fr       */
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
		void createContact(Contact contact);
		void displayContacts(unsigned i);
		void displayAllContacts();
};

#endif