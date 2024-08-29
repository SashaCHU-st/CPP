/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:02:00 by aheinane          #+#    #+#             */
/*   Updated: 2024/08/29 12:42:02 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "own.hpp"
void PhoneBook:: createContact(Contact contact)
{
	if (index < maxContacts)
		contacts[index++] = contact;
	else
	{
		std::cout << "PhoneBook is full, replacing the last one\n";
		contacts[index %8] = contact;
		index++;
	}
	at_least_one = true;
}
