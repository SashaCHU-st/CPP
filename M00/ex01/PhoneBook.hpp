/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:15:26 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/27 13:48:56 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "own.hpp"

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