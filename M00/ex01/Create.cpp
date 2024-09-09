/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheinane <aheinane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:02:00 by aheinane          #+#    #+#             */
/*   Updated: 2024/09/06 08:55:41 by aheinane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "own.hpp"
void PhoneBook:: createContact(Contact contact)
{
	if (index < maxContacts)
		contacts[index++] = contact;
	else
	{
		std::cout << "PhoneBook is full, replacing the oldest one\n";
		contacts[index % (maxContacts - 1)] = contact;
		index++;
	}
	at_least_one = true;
}
