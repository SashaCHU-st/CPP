/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispay.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:04:56 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/06 09:05:16 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "own.hpp"
void PhoneBook::  displayContacts(unsigned i)
{
	if(i < index )
	{
		unsigned count;
		if (index < maxContacts)
			count = index;
		else
			count = maxContacts;
		std::string first_name = contacts[i].get_fn();
		std::string last_name = contacts[i].get_ln();
		std::string nick_name = contacts[i].get_nn();
		std::string phone = contacts[i].get_pn();
		std::string dark = contacts[i].get_ds();
			std::cout << "Index: "<< i << "\n";
			std::cout << "First name: " << first_name << "\n";
			std::cout << "Last name: "  << last_name << "\n";
			std::cout << "Nickname: "  << nick_name << "\n";
			std::cout << "Phone: "  << phone << "\n";
			std::cout << "Dark: "  << dark << "\n";
	}
	else
		std::cout << "Contact not yet created, so far it is created " << index - 1 <<" contacts "<<std::endl;
}
void PhoneBook:: displayAllContacts()
{
		unsigned count;
		if (index < maxContacts)
			count = index;
		else
			count = maxContacts;
		std::cout << std::setw(10) << std::right << "Index"
				<< "|" << std::setw(10) << std::right << "first_name" 
				<< "|" << std::setw(10) << std::right << "last_name"
				<< "|" << std::setw(10) << std::right << "nick_name" 
				<< "|" << "\n";
		for(unsigned i = 1; i < count; i++)
		{
			std::string first_name = contacts[i].get_fn();
			std::string last_name = contacts[i].get_ln();
			std::string nick_name = contacts[i].get_nn();
			int length_fn = first_name.length();
			int length_ln = last_name.length();
			int length_nn = nick_name.length();
			if (length_fn > 10)
				first_name = first_name.substr(0, 9) + ".";
			if (length_ln > 10)
				last_name = last_name.substr(0, 9) + ".";
			if (length_nn > 10)
				nick_name = nick_name.substr(0, 9) + ".";
			std::cout << std::setw(10) << std::right << i
				<< "|" << std::setw(10) << std::right << first_name 
				<< "|" << std::setw(10) << std::right << last_name 
				<< "|" << std::setw(10) << std::right << nick_name 
				<< "|" << "\n";
		}

}
