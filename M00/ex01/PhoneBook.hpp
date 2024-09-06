/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:15:26 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/06 14:40:32 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "own.hpp"

class PhoneBook
{
	private:
		static const unsigned maxContacts = 9;
		Contact contacts[maxContacts];
		unsigned index = 1;
	public:
		unsigned int at_least_one = 0;
		void createContact(Contact contact);
		void displayContacts(unsigned i);
		void displayAllContacts();
};

#endif